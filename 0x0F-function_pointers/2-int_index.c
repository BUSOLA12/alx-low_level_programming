#include "function_pointers.h"
/**
 * int_index - checks for an integer
 * @array: array to iterate
 * @size: size of array
 * @cmp: pointer to function that checks for integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i, result;
	if (!array || !cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for(i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
