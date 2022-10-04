#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns pointer to a
 * 2 dimensional array of integers
 * @width: number of lines
 * @height: number of columns
 *
 * Return: a pointer to bidimensional array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		arr[i] = malloc(height * sizeof(int));
	if (arr == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
