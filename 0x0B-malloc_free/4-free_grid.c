#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: iteration through array of pointers
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(dd_ptr[i]);
	}
	free(dd_ptr);
}