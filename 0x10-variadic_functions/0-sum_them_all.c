#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list valist;

	va_start(valist, n);
	if (n == 0)
	{
	return (0);
	}
for (i = 0; i < n - 1; i++)
{
	sum += va_arg(valist, int);
}
va_end(valist);
return (sum);
}
