#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - print all parameters
 * @format: string of used formats
 *
 * Return: void function
 */
void print_all(const char * const format, ...)
{
	int j, i;
	double f;
	char *s;
	char c;
	va_list args;

	j = 0;
	va_start(args, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
		}
		if (format[j] == '\0')
			break;
		printf(", ");
		j++;
	}
	va_end(args);
	printf("\n");
}
