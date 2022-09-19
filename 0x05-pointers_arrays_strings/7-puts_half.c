#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: * before str, parameter
 *
 * Return: void function no return value
 */
void puts_half(char *str)
{
	int a, i, length = 0, n;

	do {
		a = *(str + length);
		length++;
	} while (a != '\0');
	length -= 1;
	if ((length % 2) != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;
	for (i = n + 1; i < length; i++)
	{
		a = *(str + i);
		_putchar(a);
	}
	_putchar('\n');
}
