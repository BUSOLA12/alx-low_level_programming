#include "main.h"
/**
 * _islower - checks if a character is a lowercase alphabet
 *
 * Return: Always 1 (Success)
 * Return: Always 0 if otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 123)
{
return (1);
}
else
{
return (0);
}
}
