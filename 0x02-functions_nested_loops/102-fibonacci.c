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
unsigned long long int nf1 = 1;
unsigned long long int nf2 = 2;
printf("%llu, %llu, ", nf1, nf2);
for (i = 3; i <= n; i++)
{
unsigned long long int nnf = nf1 + nf2;
printf("%llu", nnf);
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
