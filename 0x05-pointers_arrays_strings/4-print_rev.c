#include "main.h"

/**
 * print_rev - print a string in reverse to stdout
 * @s: * before s, parameter
 *
 * Return: void function no return value
 */
void print_rev(char *s)
{
	int a, i, length = 0;

	do {
		a = *(s + length);
		length++;
	} while (a != '\0');
	length -= 1;
	for (i = length - 1; i >= 0; i--)
	{
		a = *(s + i);
		_putchar(a);
	}
	_putchar('\n');
}
