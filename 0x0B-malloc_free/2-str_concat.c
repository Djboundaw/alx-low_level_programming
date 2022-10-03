#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - functaion that concatenates two strings
 * @s1: the first string
 * @s2: second one to concatenates to the first
 *
 * Return: pointer to a newly allocated space in memory
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int size, i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2;
	arr = malloc(size * sizeof(char) + 1);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (i = len1; i < size; i++)
		arr[i] = s2[i - len1];
	return (arr);
}
