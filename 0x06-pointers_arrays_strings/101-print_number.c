#include "main.h"
/**
 * print_number - Entry point
 * @n: parameter
 *
 * Return: nothing - void function
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar(45);
	}
	else
	{
		a = n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
