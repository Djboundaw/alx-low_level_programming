#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: * before dest, the first string
 * @src: * before src, the second string
 *
 * Return: return the result to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, length1, length2;
	char rev[1000], *tmp;
	
	i = 0, length1 = 0, length2 = 0;
	tmp = src;
	do {
		*(rev + length1) = *(dest + length1);
		length1++;
	} while (*(dest + length1) != '\0');
	do {
		*(rev + length1 + length2) = *(tmp + length2);
		length2++;
	} while (*(tmp + length2) != '\0');
	for (i = 0; i < length1 + length2; i++)
	{
		dest[i] = rev[i];
	}
	return (dest);
}
