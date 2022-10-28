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
	unsigned long int b = n;
	unsigned int i = 63;

	while (i > 0)
	{
		if (b & 1)
			break;
		b = b >> 1;
		i--;
	}
	if (index > i)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	b = n >> index;
	return (b & 1);
}
