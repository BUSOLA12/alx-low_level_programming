#include <stdio.h>
/**
 * main - print alphabets in both upper and lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 97; i < 123; i++)
{
putchar(i);
}
for (j = 65; j < 91; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
