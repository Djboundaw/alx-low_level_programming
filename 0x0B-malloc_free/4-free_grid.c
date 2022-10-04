#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: refer to the array
 * @height: parameter
 *
 * Return: void function nothing to return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
