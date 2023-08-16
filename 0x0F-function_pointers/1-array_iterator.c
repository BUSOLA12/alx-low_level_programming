#include "function_pointers.h"
/**
 * @array_iterator - iterates for a function
 * @size: size of array
 * @action: pointer to a funution
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;
	if (!array || !action)
	{
		return;
	}
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
}
