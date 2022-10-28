#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: the number to check
 * @index: the index to return it's bit
 *
 * Return: value of a bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	b = n >> index;
	if (!b)
		return (-1);
	if (b & 1)
		return (1);
	else if (!(b & 0))
		return (0);
}
