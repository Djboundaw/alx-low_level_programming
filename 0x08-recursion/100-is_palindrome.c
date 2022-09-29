#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, o else
 */
int is_palindrome(char *s)
{
	int res, len = _strlen_recursion(s);

	res = is_palindrome_n(s, len);
	return (res);
}

/**
 *_strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: the length of the string (int)
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (s[0] == '\0')
		length = 0;
	else if (s[0] == '\0')
		length = 1;
	else
		length = _strlen_recursion(s + 1) + 1;
	return (length);
}

/**
 * is_palindrome_n - same as is_palindrome but using two parameter
 * @s: the string to check
 * @len: length of the string
 *
 * Return: 1 if it's a palindrome, 0 else
 */
int is_palindrome_n(char *s, int len)
{
	if (len == 0)
		return (1);
	if ((len == 2 && s[0] == s[1]) || (len == 3 && s[0] == s[2]))
		return (1);
	else if (s[0] != s[len - 1])
		return (0);
	else
		return (is_palindrome_n(s + 1, len - 2));
}
