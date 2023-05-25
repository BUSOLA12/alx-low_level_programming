#include <stdio.h>
/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main()
{
int sum_of_multiples = 0;
int i;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum_of_multiples += i;
}
}
printf("sum of the multiples is equal to: %d", sum_of_multiples);
return(0);
}
