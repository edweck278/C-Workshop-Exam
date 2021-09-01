/**
 @file  strlib.c
 @author Ezra Dweck
 @brief String Library
 @date 9/1/21
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myboolean.h"
#include "strlib.h"

String *CreateString(const char *source)
{
    String *string = (String *) malloc(sizeof(String));
    char *copy = (char *) malloc(sizeof(source));
    strcpy(copy, source);
    string->str = copy;
    return string;
}

BOOL DeleteString(String *str)
{
    if (str == NULL)
    {
        return false;
    }
    else if (str->str == NULL)
    {
        free(str);
        return true;
    }
    else
    {
        free(str->str);
        free(str);
        return true;
    }
}

const char *GetString(const String *str)
{
    return str->str;
}

int GetStringLength(const String *str)
{
    if (str == NULL || str->str == NULL) {
        return -1;
    }
    else
    {
        return (int)strlen(str->str);
    }
}

BOOL IsEmpty(const String *str)
{
    if (GetStringLength(str) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CompareString(const String *str1, const String *str2)
{
    return strcmp(str1->str, str2->str);
}

void CopyString(String *dst, const String *src)
{
    if (dst->str != NULL)
    {
        free(dst->str);
    }
    char *copy = (char *) malloc(sizeof(src->str));
    strcpy(copy, src->str);
    dst->str = copy;
}

void CopyCString(String *dst, const char *src)
{
    if (dst->str != NULL)
    {
        free(dst->str);
    }
    char *copy = (char *) malloc(sizeof(src));
    strcpy(copy, src);
    dst->str = copy;
}

void AppendString(String *dst, const String *src)
{
    if (dst->str == NULL)
    {
        return;
    }
    char *new = (char *) malloc(sizeof(src->str)+sizeof(dst->str));
    strcpy(new, dst->str)
    free(dst->str);
    strcat(new, src->str);
    dst->str = new;
}
