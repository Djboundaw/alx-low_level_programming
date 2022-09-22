#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: * before dest, the first string
 * @src: * before src, the second string
 * @n: number bytes from src
 *
 * Return: return the result to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	do {
		length++;
	} while (dest[length] != '\0');
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
