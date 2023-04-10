#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid function.
 * @grid: multidimensional array of integers first parameter.
 * @height: height of the grid second parameter.
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
