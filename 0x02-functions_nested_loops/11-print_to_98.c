#include <stdio.h>
/**
 * print_to_98 - prints all positive and negative numbers
 * from n to 98
 * @n: input number
 * Return: no return
 */
void print_to_98(int n)
{
if (n > 99)
{
for (; n > 99; n--)
{
printf("%d, ", n);
}
}
else if (n < 0)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
else
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
printf("98");
}
