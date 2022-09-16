#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - Entry point
 * @n: the number we will print using _putchar
 *
 * Return: void function no return value
 */
void print_number(int n)
{
	unsigned int a;
	int i, j;

	a = 1, i = 0, j = 0;
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	while (n / a != 0)
	{
		a = a * 10;
		i++;
	}
	a = a / 10;

	while (j < i)
	{
		_putchar((n / a) % 10 + '0');
		a = a / 10;
		j++;
	}
	if (n == 0)
		_putchar('0' + n);

}
