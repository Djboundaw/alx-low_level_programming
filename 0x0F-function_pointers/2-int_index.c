#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: where to search the integer
 * @size: size of the array
 * @cmp: function used to compare values
 *
 * Return: the index of first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
