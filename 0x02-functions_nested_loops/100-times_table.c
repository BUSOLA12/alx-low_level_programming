#include "main.h"
/**
 * print_times_table - prints the time table from 0 - 15
 * @n: receives the argument
 */
void print_times_table(int n)
{
int a, b, op;
if (n >=0 && n <= 15)
{
for (a = 0; a <= n ; a++)
{
for (b = 0; b <= n; b++)
{
op = a * b;
if (op < 10)
{
_putchar(op + '0');
if (b != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
if (op > 9 && op < 100)
{
_putchar(op / 10 + '0');
_putchar(op % 10 + '0');
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
if (op > 99)
{
_putchar(((op / 100) % 10) + '0');
_putchar(((op / 10) % 10) + '0');
_putchar(op % 10 + '0');
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}


