#include "function_pointers.h"
/**
 * int_index - checks for an integer
 * @array: array to iterate
 * @size: size of array
 * @cmp: pointer to function that checks for integer
 * Return: index of the first element for which the cmp function does not return
 * 0, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;
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
	}
	return (-1);
}
