#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: variable to be checked
 *Return: Always -l if l is negative, l if otherwise
 */
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
{
return ((-l * 10) + -l);
}
else
{
return ((l * 10) + l);
}
}

