#include "main.h"

int _strlen(char *s);

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string to print
 *
 * Return: no return value - void function
 */
void _puts_recursion(char *s)
{
	int length = 0;

	length = _strlen(s);
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

/**
 *  * _strlen - length of a string
 *   * @s: * before s, parameter
 *    *
 *     * Return: the length of the parameter
 *      */
int _strlen(char *s)
{
	int i, length = 0;

	do {
		i = *(s + length);
		length++;
	} while (i != '\0');
	return (length - 1);
}
