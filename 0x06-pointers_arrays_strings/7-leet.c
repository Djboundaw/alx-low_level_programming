#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @str: * before str, the string to encode
 *
 * Return: return the new encoding string
 */
char *leet(char *str)
{
	int i, j, a;
	char l_letters[] = {97, 101, 111, 116, 108};
	char U_letters[] = {65, 69, 79, 84, 76};
	char numbers[] = {52, 51, 48, 55, 49};

	i = 0;
	do {
		a = *(str + i);
		for (j = 0; j < 5; j++)
		{
			if (a == l_letters[j] || a == U_letters[j])
				*(str + i) = numbers[j];
		}
		i++;
	} while (a != '\0');
	return (str);
}
