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
	int **2d_ptr;
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
	2d_ptr = (int **) malloc(sizeof(int *) * height);
	if (2d_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		2d_ptr[i] = (int *) malloc(width * sizeof(int));
		if (2d_ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(2d_ptr[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			2d_ptr[i][j] = 0;
		}
	}
		return (2d_ptr);
	}
