#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: the initial string
 * @accept: string to searche for its characters on s
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
