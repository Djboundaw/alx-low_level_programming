#include "main.h"

/**
 * puts2 - reverse a string
 * @str: * before str, parameter
 *
 * Return: void function no return value
 */
void puts2(char *str)
{
	int a, i, length = 0;

	do {
		a = *(str + length);
		length++;
	} while (a != '\0');
	length -= 1;
	for (i = 0; i < length; i += 2)
	{
		a = *(str + i);
		_putchar(a);
	}
	_putchar('\n');
}
