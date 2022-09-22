#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: * before str, the string
 *
 * Return: return the new string str
 */
char *cap_string(char *str)
{
	int i, j, n, a;
	char word_sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	char U_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
		78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
	char l_letters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
		108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

	n = 0;
	do {
		a = *(str + n);
		for (i = 0; i < 13; i++)
		{
			if (*(str + n - 1) == word_sep[i])
			{
				for (j = 0; j < 26; j++)
				{
					if (a == l_letters[j])
						*(str + n) = U_letters[j];
				}
			}
		}
		n++;
	} while (a != '\0');
	return (str);
}
