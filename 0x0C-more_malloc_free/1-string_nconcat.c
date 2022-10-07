#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n < strlen(s2))
		tmp = malloc(strlen(s1) + n * sizeof(char) + 1);
	else
		tmp = malloc(strlen(s1) + n * sizeof(char) + 1);
	if (tmp == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		tmp[i] = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(tmp + i + j) = *(s2 + j);
		j++;
	}
	return (tmp);
}
