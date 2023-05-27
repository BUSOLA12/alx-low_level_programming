#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
long int n1 = 1;
long int n2 = 2;
int i;
long int nn;
printf("%ld, %ld, ", n1, n2);
for (i = 0; i <= 96; i++)
{
nn = n1 + n2;
n1 = n2;
n2 = nn;
if (i < 96)
{
printf("%ld, ", nn);
}
else
{
printf("%ld", nn);
}
}
printf("\n");
return (0);
}
