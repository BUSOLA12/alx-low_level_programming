#include "main.h"
/**
 * print_alphabet_x10 - prints ten times th alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
int i, A;
for (i = 0; i < 10; i++)
{
for (A = 97; A < 123; A++)
{
_putchar(A);
_putchar('\n');
}
}
}
