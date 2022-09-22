#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: * before s1, the first string
 * @s2: * before s2, the second string
 *
 * Return: return the result to dest
 */
int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0, res = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		res += (s1[i] - s2[i]);
		i++;
	}
	if (res < 0)
		res = -15;
	else if (res > 0)
		res = 15;
	return (res);
}
