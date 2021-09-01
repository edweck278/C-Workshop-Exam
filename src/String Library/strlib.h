/**
 @file  strlib.h
 @author Ezra Dweck
 @brief String Library
 @date 9/1/21
 */


#ifndef strlib_h
#define strlib_h

#include "myboolean.h"
#include <string.h>

typedef struct String {
    char *str;
} String;

/**
 @brief Creates a string.
 receives a source string, allocates space for the String object and a new copy of the source, then copies the source to the String object and returns that object.
 @param source string to create
 @return pointer to the created string
 */
String *CreateString(const char *source);

/**
 @brief frees all the resources of the string: The String object itself, and also the internal char *.
 
 @param str string to delete
 @return true if deleted, false if null string was passed
 */
BOOL DeleteString(String *str);

/**
 @brief returns the string from the String object
 does not copy
 @param str String object to extract string from
 @return the string (const char *)
 */
const char *GetString(const String *str);

/**
 @brief returns the length of the string
 
 @param str the string to get the length of
 @return the length of the string
 */
int GetStringLength(const String *str);

/**
 @brief checks if a string is empty
 checks first if it is null, if it is not null- checks if it is an empty string
 @param str the string to check
 @return true if empty false if not
 */
BOOL IsEmpty(const String *str);

/**
 @brief compares 2 strings
 returns 0 if strings are equal, #>0 if the first non-matching character in str1 is greater (in ASCII) than that of str2., and #<0 if the first non-matching character in str1 is lower (in ASCII) than that of str2.
 @param str1 the first string to compare
 @param str2 the second string to compare
 @return int as explained above
 */
int CompareString(const String *str1, const String *str2);

/**
 @brief copies from a String obj to a String obj
 if a string existed in dst it frees it
 @param dst the string copying to
 @param src the string copying from
 */
void CopyString(String *dst, const String *src);

/**
 @brief copies from a char * to a String obj
 if a string existed in dst it frees it
 @param dst the string copying to
 @param src the string copying
 */
void CopyCString(String *dst, const char *src);

/**
 @brief appends a String obj onto a String obj
 if a string existed in dst it frees it and allocates new space
 @param dst the string appending to
 @param src the string appending from
 */
void AppendString(String *dst, const String *src);



#endif /* strlib_h */
