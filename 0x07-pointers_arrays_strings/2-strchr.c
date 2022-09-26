#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string where we will search for the character
 * @c: the character to search for
 *
 * Return: retruns a pointer to first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i, occ;
	char *n = '\0';

	i = 0, occ = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		{
			occ = i;
			break;
		}
		i++;
	}
	if (occ == 0)
		return (n);
	else
		return (s + occ);
}
