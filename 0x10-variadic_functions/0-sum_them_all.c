#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all the parameters of the function
 * @n: number of parameters
 *
 * Return: the sum of parameters or 0 if there is no parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);

	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
