#include "main.h"
/**
 * print_line - Entry point
 * @n: the parameter number times _ will be print
 *
 * Return: void function any return value
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
