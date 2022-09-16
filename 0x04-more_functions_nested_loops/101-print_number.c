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
	int a, b;
	
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else if (n > -100 && n < 100)
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar(45);
		}
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= -2147483647 && n <= 2147483646)
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar(45);
		}
		a = n / 10;
		b = n % 10;
		print_number(a);
		_putchar(b + '0');
	}
	else if (n == INT_MIN)
	{
		a = INT_MAX / 10;
		b = INT_MAX % 10;
		_putchar(45);
		print_number(a);
		_putchar((b + 1) + '0');
	}
	else if (n == INT_MAX)
	{
		a = INT_MAX / 10;
		b = INT_MAX % 10;
		print_number(a);
		_putchar(b + '0');
	}
}
