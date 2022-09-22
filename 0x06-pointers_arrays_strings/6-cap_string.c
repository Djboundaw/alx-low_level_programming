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
	char word_sep[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

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
