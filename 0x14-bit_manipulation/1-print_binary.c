#include "main.h"
#include <stdio.h>
/**
 * print_binary - it prints the binary representation of a decimal
 * @n: the decimal to represent
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int shift;
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (temp = n, shift = 0; (temp >>= 1) > 0; shift++)
		;
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

