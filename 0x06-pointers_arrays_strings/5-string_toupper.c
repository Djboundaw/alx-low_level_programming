#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters to uppercase
 * @str: * before str, the string
 *
 * Return: return the new string
 */
char *string_toupper(char *str)
{
	int i, a;
	char tmp[500];

	i = 0;
	do {
		a = *(str + i);
		if (a >= 97 && a <= 122)
			a -= 32;
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
