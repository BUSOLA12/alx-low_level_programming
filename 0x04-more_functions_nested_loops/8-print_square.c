#include "stdio.h"
/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */
void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
_putchar('#')
}
_putchar('\n');
}
}
