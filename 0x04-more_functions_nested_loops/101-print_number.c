#include "main.h"
/**
 * print_number - Entry point
 * @n: parameter
 *
 * Return: nothing - void function
 */
void print_number(int n)
{
	int a, max, min, i, j;

	max = 2147483647, min = -2147483648;
	i = 8, j = 7;
	if (n < max && n > min)
	{
		if (n < 0)
		{
			a = -n;
			_putchar(45);
		}
		else
			a = n;
		if (a < 10)
			_putchar(a + '0');
		else if (a < 100)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		else
		{
			print_number(a / 10);
			_putchar(a % 10 + '0');
		}
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
