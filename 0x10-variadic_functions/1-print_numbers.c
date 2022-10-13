#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: used to separate numbers
 * @n: number of parameters
 *
 * Return: void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
