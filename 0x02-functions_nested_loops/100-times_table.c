#include "main.h"
/**
 * print_times_table - prints the time table from 0 - 15
 * @n: receives the argument
 */
void print_times_table(int n)
{
int a, b, r;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n ; a++)
{
_putchar(48);
for (b = 1; b <= n; b++)
{
op = a * b;
_putchar(44);
_putchar(32);
if (r < 10)
{
_putchar(32);
_putchar(32);
_putchar(r + 48);
}
else if (r <= 99)
{
_putchar(32);
_putchar((r / 10) + 48);
_putchar((r % 10) + 48);
}
else
{
_putchar(((r / 100) % 10) + 48);
_putchar(((r / 10) % 10) + 48);
_putchar((r % 10) + 48);
}
}
_putchar('\n');
}
}
}
