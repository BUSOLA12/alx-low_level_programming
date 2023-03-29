#include <stdio.h>
/**
 * main - prints single digits from 0-9 and seperates them
 * with comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
