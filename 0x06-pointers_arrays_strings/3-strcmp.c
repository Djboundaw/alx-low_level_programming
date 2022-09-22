#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: * before s1, the first string
 * @s2: * before s2, the second string
 *
 * Return: negative, positve or 0 for less than,
 * greater than or equal
 */
int _strcmp(char *s1, char *s2)
{int res, i, length1, length2;

	i = 0, res = 0, length1 = 0, length2 = 0;
	do {
		length1++;
	} while (s1[length1] != '\0');
	do {
		length2++;
	} while (s2[length2] != '\0');
	if (length1 < length2)
		res = -15;
	else if (length1 > length2)
		res = 15;
	else
	{
		while (s1[i] != '\0')
		{
			if (s1[i] != s2[i])
				res += (s1[i] - s2[i]);
			i++;
		}
		if (res < 0)
			res = -15;
		else if (res > 0)
			res = 15;
	}
	return (res);
}
