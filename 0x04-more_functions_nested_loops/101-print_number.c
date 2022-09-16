#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_number - Entry point
 * @n: the number we will print using _putchar
 *
 * Return: void function no return value
 */
void print_number(int n)
{
	unsigned int a;

	if (n == 0)
		_putchar(0 + '0');
	if (n < 0)
	{
		a = -n;
		_putchar(45);
	}
	else
	{
		a = n;
	}
	if (a > 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
