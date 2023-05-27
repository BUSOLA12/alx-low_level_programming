#include <stdio.h>
/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
long int num1, num2, next, sum;
num1 = 0;
num2 = 1;
sum = next = 0;
while (next <= 4000000)
{
next = num1 + num2;
num1 = num2;
num2 = next;
if (num1 % 2 == 0)
{
sum = sum + num1;
}
}
printf("%ld\n", sum);
return (0);
}
