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
{
	int res, i;

	i = 0, res = 0;
	do {
		res = s1[i] - s2[i];
		if (res != 0)
			break;
		i++;
	} while (s1[i] != '\0' && s2[i] != '\0');
	return (res);
}
