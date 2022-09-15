#include "main.h"
/**
 * _isupper - Entry point
 * @c: the parameter to check
 *
 * Return: 1 if c is a uppercase and 0 else
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
