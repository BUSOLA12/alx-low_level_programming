#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimentional array
 * @width: the row of the array
 * @height: the coluwm of the array
 *
 * Return: a pointer to a 2d array (Success) NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int **dd_ptr;
	int i;
	int j;
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	dd_ptr = (int **) malloc(sizeof(int *) * height);
	if (dd_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dd_ptr[i] = (int *) malloc(width * sizeof(int));
		if (dd_ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(dd_ptr[j]);
			}
			free(dd_ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			dd_ptr[i][j] = 0;
		}
	}
		return (dd_ptr);
	}
