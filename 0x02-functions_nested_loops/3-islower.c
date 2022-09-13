#include "main.h"
/**
 * _islower - Entry point
 *@c: the parameter to check
 *
 * Return: 1 if the char C is uppercase
 * and 0 if the char c is lowercae
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
