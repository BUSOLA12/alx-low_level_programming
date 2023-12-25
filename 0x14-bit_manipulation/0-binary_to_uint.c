#include "main.h"
/**
 * binary_to_uint - It converts a binary to an unsigned int
 * @b: pointer to the binary string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, uint, power;

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}
	for (uint = 0; power = 1; len--; len >= 0; len--, power *= 2;)
	{
		if (b[len] == '1')
		{
			uint += power;
		}
	}
	return (uint);
}
