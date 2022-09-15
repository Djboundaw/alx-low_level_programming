#include "main.h"
/**
 * print_triangle - Entry point
 * @size: the parameter number times
 *
 * Return: void function any return value
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - 1 - i; j >= 0; j--)
				_putchar(32);
			for (k = 1; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
