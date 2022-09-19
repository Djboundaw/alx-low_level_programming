#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: * before a, first parameter
 * @b: * before b, second parameter
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
