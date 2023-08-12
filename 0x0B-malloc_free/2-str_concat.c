#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat_str;
if (s1 == NULL && s2 == NULL)
{

	s1 = " ";
	s2 = " ";
}
len1 = strlen(s1);
len2 = strlen(s2);
concat_str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
{
return (NULL);
}
strcpy(concat_str, s1);
strcpy(concat_str + len1, s2);
concat_str[len1 + len2] = '\0';
return (concat_str);
}
