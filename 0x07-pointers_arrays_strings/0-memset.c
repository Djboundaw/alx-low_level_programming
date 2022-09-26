#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: the pointer to fill
 * @b: constant byte which s will be filled with
 * @n: number of first bytes to fill
 *
 * Return: the string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
