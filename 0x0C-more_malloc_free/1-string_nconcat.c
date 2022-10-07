#include "main.h"

unsigned int _strlen(char *s);

/**
 * string_nconcat - function that concatenates two strings
 * @s1: will be the return value
 * @s2: will be concatenate to s1
 * @n: size used for the memory
 *
 * Return: pointer to s1 if success else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	unsigned int i, j;

	i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < _strlen(s2))
		tmp = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		tmp = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (tmp == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		tmp[i] = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(tmp + i) = *(s2 + j);
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/**
 * _strlen - find length of a string
 * @dest: string to find its length
 *
 * Return: length of the string dest
 */

unsigned int _strlen(char *dest)
{
	unsigned int size = 0;

	for (; dest[size] != '\0'; size++)
		;
	return (size);
}
