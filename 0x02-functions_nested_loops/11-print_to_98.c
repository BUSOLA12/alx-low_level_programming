#include "main.h"
/**
 * print_to_98 - prints from n to 98
 * @n: it takes input
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
if (n == 99)
{
_putchar(((n / 10) % 10) + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n / 100 + '0');
_putchar(((n / 10) % 10) + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
}
else
{
    for (; n < -99; n++)
{
_putchar('-');
_putchar(-n / 100 + '0');
_putchar(((-n / 10) % 10) + '0');
_putchar(-n % 10 + '0');
_putchar(',');
_putchar(' ');
}
for (; n <= 0; n++)
{

if (n <= -10)
{
_putchar('-');
_putchar(-n / 10 + '0');
_putchar(-n % 10 + '0');
_putchar(',');
_putchar(' ');
}
if (n > -10 && n < 0)
{
_putchar('-');
_putchar(-n % 10  + '0');
_putchar(',');
_putchar(' ');
}
if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
}
for (; n < 98; n++)
{

if (n >= 1 && n <= 9)
{
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
if (n > 9)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
}
_putchar('9');
_putchar('8');
_putchar ('\n');
}


