#include "main.h"

/**
 * flip_bits - check number of bits to flip
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr;
	int i;

	nbr = 0;
	for (i = 0; i < 63; i++)
	{
		if ((n & 1) ^ (m & 1))
			nbr++;
		n = n >> 1;
		m = m >> 1;
	}
	return (nbr);
}
