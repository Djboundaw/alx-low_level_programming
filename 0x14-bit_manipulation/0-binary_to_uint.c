#include "main.h"

/**
 * _pow - calculate power of un number
 * @x: int we will power up
 * @y: the power
 *
 * Return: x raised to the power of y
 */
int _pow(int x, int y)
{
	int pow;

	if (y >= 0)
	{
		if (y == 0)
			pow = 1;
		else
			pow = x * _pow(x, y - 1);
	}
	else
		pow = -1;
	return (pow);
}

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary in type string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, len;
	int a, i;

	n = 0;
	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	for (i = len; i >= 0; i--)
	{
		if (b[i] > 57 || b[i] < 48)
			return (0);
		a = b[i] - '0';
		n = n + a * _pow(2, len - i);
	}
	return (n);
}
