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
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str);
char *new_str = (char *) malloc(sizeof(char) * len;)
if (new_str == NULL)
{
return (NULL);
}
str[len + 1] = new_str[len + 1];
str[len + 1] = '\0';
return new_str[len + 1];
}
