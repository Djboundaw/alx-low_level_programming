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
	int i, length;
	char a;

	do {
		a = *(dest + length);
		length++;
	} while (a != '\0');
	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';
	return (dest);
}
