#include "main.h"
/**
 * print_last_digit - Entry point
 * @c: the parameter to check
 *
 * The function will print the last digit of c
 * Return: 0 (Success)
 */
int print_last_digit(int c)
{
	int l_digit;

	l_digit = c % 10;
	if (l_digit < 0)
		l_digit = -l_digit;
	_putchar(l_digit + '0');
	return (l_digit);
}
