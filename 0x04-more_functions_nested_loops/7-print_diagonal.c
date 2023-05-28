#include "main.h"
/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(32);
}
_putchar('\\');
_putchar('\n');
}
}
