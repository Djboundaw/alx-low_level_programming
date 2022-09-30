#include "main.h"

/**
 *
 *
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != '\0' && *s2 == '*')
		return (1);
	else if (s1[0] != '\0' && s2[0] != '\0')
		return (_strcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
