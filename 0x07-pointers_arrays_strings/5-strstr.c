#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string where we will search for needle
 * @needle: the string to search on haystack
 *
 * Return: retruns a pointer to first occurrence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, length;

	i = 0, length = 0, k = 0;
	while (*(needle + length) != '\0')
	{
		length++;
	}
	do {
		if (*(haystack + i) == needle[0])
		{
			while (k < length && haystack[i + k] == needle[k])
				k++;
			if (k == length)
				return (haystack + i);
		}
		i++;
	} while (*(haystack + i) != '\0');
	return (0);
}
