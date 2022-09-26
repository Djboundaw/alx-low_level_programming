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

	i = 0, occ = -1;
	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		{
			occ = i;
			break;
		}
		i++;
	}
	if (occ < 0)
		return ('\0');
	else
		return (s + occ);
}
