#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned int to convert to binary
 *
 * Return: void function
 */
void print_binary(unsigned long int n)
{
	unsigned long int b, num;
	int i, nbr;

	num = n;
	nbr = 0;
	i = 63;
	while (i > 0)
	{
		if (num & 1)
			break;
		num = num >> 1;
		i--;
	}
	while (i >= 0)
	{
		b = n >> i;
		if (b & 1)
		{
			_putchar('1');
			nbr++;
		}
		else if (nbr)
			_putchar('0');
		i--;
	}
	if (!nbr)
	_putchar('0');
}
