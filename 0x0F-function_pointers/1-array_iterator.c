#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as parameter on each element of an array
 * @array: the array to print its elements
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
