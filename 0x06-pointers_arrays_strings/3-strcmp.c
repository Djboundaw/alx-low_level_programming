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
	int i, res, a, b, length1, length2;

	i = 0, res = 0, length1 = 0, length2 = 0;
	do {
		a = *(s1 + length1);
		length1++;
	} while (a != '\0');
	length1--;
	do {
		b = *(s2 + length2);
		length2++;
	} while (b != '\0');
	length2--;
	do {
		a = *(s1 + i);
		b = *(s2 + i);
		if (a < b)
			res -= 1;
		else if (a > b)
			res += 1;
		i++;
	} while (a != '\0' && b != '\0');
	/*if (length1 < length2)
		res *= length1;
	else
		res *= length2;*/
	if (res < 0)
		res = -15;
	else if (res > 0)
		res = 15;
	return (res);
}
