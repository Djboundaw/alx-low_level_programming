#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string to print
 *
 * Return: no return value - void function
 */
void _puts_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	if (length == 1)
	{
		_putchar(s[0]);
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		s = (s + 1);
		_puts_recursion(s);
	}
}
