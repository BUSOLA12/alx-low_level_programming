#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
int 1;
l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-1);
}
else
{
_putchar(l + 48);
return (1);
}
}
