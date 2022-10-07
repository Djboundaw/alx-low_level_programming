#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function creates an array of integers
 * @min: length of the array
 * @max: our max value
 *
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
	int *tmp, i;

	if (min > max)
		return (NULL);
	tmp = malloc((max - min + 1) * sizeof(int));
	if (tmp == 0)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		tmp[i] = min + i;
	return (tmp);
}
