#include "main.h"

/**
 * _strlen - length of a string
 * @s: * before s, parameter
 *
 * Return: the length of the parameter
 */
int _strlen(char *s)
{
	int i, length = 0;

	do {
		i = *(s + length);
		length++;
	} while (i != '\0');
	return (length - 1);
}
