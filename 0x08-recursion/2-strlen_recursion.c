#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: the length of the string (int)
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (s[0] == '\0')
		length = 0;
	if (s[1] == '\0' && s[0] != '\0')
		length = 1;
	else
		length = _strlen_recursion(s + 1) + 1;
	return (length);
}
