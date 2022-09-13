#include "main.h"
/**
 * _isalpha - Entry point
 * @c: the parameter to check
 *
 * Return: 1 if c is a letter and 0 else
 *
 * This function will check if c is a letter or not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
