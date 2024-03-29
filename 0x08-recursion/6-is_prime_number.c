#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, 2));
}
/**
 * actual_prime - helper function to check if a number is prime.
 * @n: input number to check.
 * @i: iterator to check divisibility.
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (actual_prime(n, i + 1));
}
