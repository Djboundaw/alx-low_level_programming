#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: * before str, parameter
 *
 * Return: void function no return value
 */
void _puts(char *str)
{
	int i, length = 0;

	do {
		i = *(str + length);
		if (i == '\0')
			break;
		_putchar(i);
		length++;
	} while (i != '\0');
	_putchar('\n');
}
