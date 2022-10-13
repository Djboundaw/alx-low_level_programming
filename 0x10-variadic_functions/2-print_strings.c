#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings given as parameters
 * @separator: used to separate strings
 * @n: number of parameters
 *
 * Return: void function no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
