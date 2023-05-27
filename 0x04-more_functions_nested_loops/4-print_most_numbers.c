#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
for (i = 48; i < 58; i+++)
{
if (i == 50 && i == 52)
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
