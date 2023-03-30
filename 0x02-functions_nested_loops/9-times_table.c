#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
int i, j, op;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; i++)
{
op = i * j;
if (op < 10)
{
_putchar(' ');
_putchar(op + '0');
}
else
{
_putchar(op / 10 + '0');
_putchar(op % 10 + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
