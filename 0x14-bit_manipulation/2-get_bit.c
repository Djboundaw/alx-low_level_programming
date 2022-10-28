#include "main.h"

/**
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	b = n >> index;
	if (b & 1)
		return (1);
	else if (!(b & 0))
		return (0);
	else
		return (-1);
}
