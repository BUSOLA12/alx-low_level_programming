#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 50;
int i;
long int nf1 = 1;
long int nf2 = 2;
printf("%ld, %ld, ", nf1, nf2);
for (i = 3; i <= n; i++)
{
long int nnf = nf1 + nf2;
printf("%ld", nnf);
if (i != n)
{
printf(", ");
}
nf1 = nf2;
nf2 = nnf;
}
printf("\n");
return (0);
}
