#include "main.h"

/**
 * *_strcpy - copy src string to dest string
 * @dest: * before dest, destination where to copy the string
 * @src: source of the string
 *
 * Return: dest the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, a, length;
	char rev[500];

	i = 0, length = 0;
	do {
		a = *(src + length);
		length++;
	} while (a != '\0');
	length -= 1;
	for (i = 0; i <= length; i++)
	{
		*(rev + i) = *(src + i);
	}
	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(rev + i);
	}
	return (dest);
}
