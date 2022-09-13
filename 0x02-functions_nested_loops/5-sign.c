#include "main.h"
/**
 * print_sign - Entry point
 * @n: the number to check
 *
 * Return: 1 if it's a positive number
 * and 0 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
