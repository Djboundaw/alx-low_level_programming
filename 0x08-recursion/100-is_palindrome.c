#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, o else
 */
int is_palindrome(char *s)
{
	int res;

	if (*s == '\0')
		res = 1;
	if (s[3] == '\0')
	{
		if (s[0] == s[1])
			res = 1;
	}
	else

}
