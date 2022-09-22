#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: * before str, the string
 *
 * Return: return the new string str
 */
char *cap_string(char *str)
{
	int i, n, a;
	char word_sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	n = 0;
	do {
		a = *(str + n);
		for (i = 0; i < 13; i++)
		{
			if (*(str + n - 1) == word_sep[i])
			{
				if (str[n] >= 97 && str[n] <= 122)
					str[n] -= 32;
			}
		}
		n++;
	} while (a != '\0');
	return (str);
}
