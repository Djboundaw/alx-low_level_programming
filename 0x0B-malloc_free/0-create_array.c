#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of the array
 * @c: the specific char
 *
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(c));
	if (size == 0 || arr == 0)
		return (0);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
