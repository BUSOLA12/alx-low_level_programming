#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
int i = 0;
while (i >= 0)
{
if(s[i] == '\n')
break;
for (count--; count >= 0; count--)
_putchar(s[count]);
_putchar('\n');
