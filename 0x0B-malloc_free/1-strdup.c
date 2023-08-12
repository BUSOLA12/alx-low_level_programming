#include <string.h>
#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to the string copied from the parameter
 * @str: string to be copied
 * Return: NULL (fail) pointer to copied string (Success)
 */
char *_strdup(char *str)
{
size_t len;
char *new_str;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
new_str = (char *) malloc(sizeof(char) * len + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
new_str[len] = '\0';
return (new_str);
}
