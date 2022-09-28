#include "main.h"

/**
 * _pow_recursion - calculate power of un number
 * @x: int we will power up
 * @y: the power
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y >= 0)
	{
		if (y == 0)
			pow = 1;
		else
			pow = x * _pow_recursion(x, y - 1);
	}
	else
		pow = -1;
	return (pow);
}
