#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string which copy will be saved on an allocated memory
 *
 * Return: pointer to the duplicated string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int size, i;

	size = strlen(str);
	i = 0;
	if (str[0] == '\0')
		return (NULL);
	arr = malloc(size * sizeof(char));
	do {
		*(arr + i) = str[i];
		i++;
	} while (str[i] != '\0');
	return (arr);
}
