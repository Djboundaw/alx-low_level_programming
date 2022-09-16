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
	int a, i;
	
	a = 1;
	i = 0;
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	while (n / a != 0)
	{
		a = a * 10;
		i++;
	}
	a = a / 10;

	while (i != 0)
	{
		_putchar((n / a) % 10 + '0');
		a = a / 10;
		i--;
	}
	if (n == 0)
		_putchar('0' + n);

}
