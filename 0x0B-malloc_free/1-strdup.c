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
		return (0);
	size = strlen(str);
	arr = malloc(size * sizeof(char) + 1);
	if (arr == 0)
		return (0);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
