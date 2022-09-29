#include "main.h"

/**
 * _sqrt_recursion - calculate square root of a number if integer
 * @n: number to return the square root
 *
 * Return: -1 if n dosn't have square root
 */
int _sqrt_recursion(int n)
{
	return (_square_recursion(n, 1));
}

/**
 * _square_recursion - calculate quare root of a number
 * @n: number to returns its quare root
 * @m: the square root of n
 *
 * Return: an integer
 */
int _square_recursion(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
	{
		m += 1;
		return (_square_recursion(n, m));
	}
	else
		return (-1);
}
