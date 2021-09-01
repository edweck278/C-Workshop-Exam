/**
 @file  strtst.c
 @author Ezra Dweck
 @brief Testing String Library
 @date 9/1/21
 */

#include <stdio.h>
#include <stdlib.h>
#include "../String Library/strlib.h"
#include "../String Library/strlib.c"
#include "../String Library/myboolean.h"


BOOL testCreateString(void)
{
    String *str = CreateString("hello");
    if (strcmp("hello", str->str) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testDeleteString(void)
{
    String *str = CreateString("hello");
    if (DeleteString(str))
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testGetString(void)
{
    String *str = CreateString("hello");
    if (strcmp("hello", GetString(str)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testGetStringLength(void)
{
    String *str = CreateString("hello");
    if (GetStringLength(str) == 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testIsEmpty(void)
{
    String *str = CreateString("hello");
    String *str1 = CreateString("");
    if (!IsEmpty(str) && IsEmpty(str1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testCompareString(void)
{
    String *str = CreateString("hello");
    String *str1 = CreateString("jello");
    if (CompareString(str, str) == 0 && CompareString(str, str1) < 0 && CompareString(str1, str) > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

BOOL testCopyString(void)
{
    String *str = CreateString("hello");
    String *str1 = CreateString("jello");
    CopyString(str1, str);
    if (CompareString(str, str1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
BOOL testCopyCString(void)
{
    String *str = CreateString("hello");
    char *str1 = "jello";
    strcpy(str->str, str1);
    if (strcmp(str->str, str1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main(int argc, const char * argv[]) {
    if (testCreateString())
    {
        printf("CreateString succeeded\n");
    }
    else
    {
        printf("CreateString failed\n");
    }
    
    if (testDeleteString())
    {
        printf("DeleteString succeeded\n");
    }
    else
    {
        printf("DeleteString failed\n");
    }
    
    if (testGetString())
    {
        printf("GetString succeeded\n");
    }
    else
    {
        printf("GetString failed\n");
    }
    
    if (testGetStringLength())
    {
        printf("GetStringLength succeeded\n");
    }
    else
    {
        printf("GetStringLength failed\n");
    }
    
    if (testIsEmpty())
    {
        printf("IsEmpty succeeded\n");
    }
    else
    {
        printf("IsEmpty failed\n");
    }
    
    if (testCompareString())
    {
        printf("CompareString succeeded\n");
    }
    else
    {
        printf("CompareString failed\n");
    }
    
    if (testCopyString())
    {
        printf("CopyString succeeded\n");
    }
    else
    {
        printf("CopyString failed\n");
    }
    
    if (testCopyCString())
    {
        printf("CopyCString succeeded\n");
    }
    else
    {
        printf("CopyCString failed\n");
    }
    
    return 0;
}
