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
	int i, j, length, occ, min;

	i = 0, length = 0;
	occ = -1;
	while (*(s + length) != '\0')
	{
		length++;
	}
	min = length - 1;
	do {
		for (j = 0; j < length; j++)
		{
			if (s[j] == accept[i])
			{
				occ = j;
				continue;
			}
		}
		if (occ <= min)
			min = occ;
		i++;
	} while (*(accept + i) != '\0');
	if (occ >= 0)
		return (s + min);
	else
		return ('\0');
}
