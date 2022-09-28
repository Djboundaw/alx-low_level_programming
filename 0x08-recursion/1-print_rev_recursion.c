#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 *
 * Return: no return value - void function
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else if (s[1] == '\0')
		_putchar(s[0]);
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
