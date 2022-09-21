#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @str: * before str, the string to encode
 *
 * Return: return the new encoding string
 */
char *leet(char *str)
{
	int i, a;
	char tmp[500];

	i = 0;
	do {
		a = *(str + i);
		if (a == 65 || a == 97)
			a = 52;
		else if (a == 69 || a == 101)
			a = 51;
		else if (a == 79 || a == 111)
			a = 48;
		else if (a == 84 || a == 116)
			a = 55;
		else if (a == 76 || a == 108)
			a = 49;
		*(tmp + i) = a;
		i++;
	} while (a != '\0');
	i = 0;
	do {
		*(str + i) = *(tmp + i);
		i++;
	} while (*(tmp + i) != '\0');
	return (str);
}
