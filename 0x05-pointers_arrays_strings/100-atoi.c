#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: * before s - string to convert
 *
 * Return: return the integer found
 */
int _atoi(char *s)
{
	int nbr;
	int a, b, length;
	char i;

	a = 0, length = 0;
	do {
		i = *(s + length);
		if (i == 45)
			a++;
		if (i >= 48 && i <= 57)
		{
			b = i - '0';
			break;
		}
		length++;
	} while (i != '\0');
	nbr = b;
	length += 1;
	do {
		i = *(s + length);
		if (i >= 48 && i <= 57)
		{
			b = i - '0';
			nbr = nbr * 10 + b;
		}
		else
			break;
		length++;
	} while (i != '\0');
	if (a % 2 != 0)
		nbr *= -1;
	return (nbr);
}
