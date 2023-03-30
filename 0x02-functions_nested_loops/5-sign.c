#include "main.h"
/**
 * print_sign - prints the sign of characters
 * @n: character to be checked
 * Return: Always 1 (Success), 0 if zero, -1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
