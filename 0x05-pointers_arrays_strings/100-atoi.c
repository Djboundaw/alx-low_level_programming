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
	unsigned int nbr;
	int a, b, c, length;
	char i;

	a = 0, length = 0, c = 0;
	do {
		i = *(s + length);
		if (i == 45)
			a++;
		if (i >= 48 && i <= 57)
		{
			b = i - '0';
			c++;
			break;
		}
		length++;
	} while (i != '\0');
	length += 1;
	if (c == 0)
		nbr = 0;
	else
	{
		nbr = b;
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
	}
	if (a % 2 != 0)
		nbr *= -1;
	return (nbr);
}
