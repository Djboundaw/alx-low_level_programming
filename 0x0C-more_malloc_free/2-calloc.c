#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @dest: pointer to put the constant
 * @b: value of the constant
 * @n: max bytes to use
 *
 * Return: the pointer dest
 */

char *_memset(char *dest, char b, unsigned int n)
{
	char *ptr = dest;
	int i = 0;

	while (n > 0)
		*(s + i) = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: the pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tmp;

	if (size == 0 || nmemb == 0)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == 0)
		return (NULL);
	_memset(tmp, 0, nmemb * size);
	return (tmp);
}
