#include "main.h"

/**
 * _sqrt_recursion - calculate square root of a number
 * @n: number to return the square
 *
 * Return: -1 if n dosn't have square root
 */
int _sqrt_recursion(int n)
{
	int res;

	res = 1;
	if (n == 0)
		res = 0;
	else if (n == 1)
		res = 1;
	else
	{
		if (n / res == res)
			return (res);
		else
		{
			res++;
			_sqrt_recursion(n);
		}
	}
	return (res);
}
