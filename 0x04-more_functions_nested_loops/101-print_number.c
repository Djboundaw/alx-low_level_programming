#include "main.h"
/**
 * print_number - Entry point
 * @n: parameter
 *
 * Return: nothing - void function
 */
void print_number(int n)
{
	int a, b, max, min, i, j;

	max = 2147483647, min = -2147483648;
	i = 8, j = 7;
	if (n == 0)
		_putchar(n + '0');
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
	else if (n > min && n < max)
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
	else if (n == min)
	{
		_putchar(45);
		print_number(214748364);
		_putchar(i + '0');
	}
	else if (n == max)
	{
		print_number(214748364);
		_putchar(j + '0');
	}
}
