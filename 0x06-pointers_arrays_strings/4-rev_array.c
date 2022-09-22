#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of numbers
 * @a: * before a, the array name
 * @n: the number of elements of the array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i, tmp[500];

	for (i = 0; i < n; i++)
		tmp[i] = a[n - 1 - i];
	for (i = 0; i < n; i++)
		a[i] = tmp[i];
}
