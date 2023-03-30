#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to be checked
 * Return: Always 1 (Success), 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
