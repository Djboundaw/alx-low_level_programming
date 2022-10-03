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

	i = 0;
	if (str == NULL)
		return (NULL);
	else
	{
		size = strlen(str);
		arr = malloc(size * sizeof(char) + 1);
		do {
			arr[i] = str[i];
			i++;
		} while (str[i] != '\0');
	}
	return (arr);
}
