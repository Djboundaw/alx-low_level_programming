#include "main.h"

/**
 * rev_string - reverse a string
 * @s: * before s, parameter
 *
 * Return: void function no return value
 */
void rev_string(char *s)
{
	char rev[500];
	int a, i, length = 0;

	do {
		a = *(s + length);
		length++;
	} while (a != '\0');
	length -= 1;
	for (i = 1; i <= length; i++)
	{
		*(rev + i - 1) = *(s + length - i);
	}
	for (i = 0; i < length; i++)
	{
		*(s + i) = *(rev + i);
	}
}
