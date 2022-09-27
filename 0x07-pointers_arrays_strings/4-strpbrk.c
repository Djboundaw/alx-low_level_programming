#include "main.h"

/**
 * _strpbrk - function that locates a character in a string
 * @s: the string where we will search for the character
 * @accept: the string to search for its bytes
 *
 * Return: retruns a pointer to first occurrence of any character of accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, length;

	i = 0, length = 0;
	while (*(accept + length) != '\0')
	{
		length++;
	}
	do {
		for (j = 0; j < length; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	} while (*(s + i) != '\0');
	return (0);
}
