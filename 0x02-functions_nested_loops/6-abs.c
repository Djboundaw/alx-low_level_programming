#include "1-main.h"
/**
 * _abs - Entry point
 * @c: the parameter to return
 * its absolute value
 *
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
