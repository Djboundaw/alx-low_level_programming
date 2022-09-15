#include "main.h"
/**
 * more_numbers - Entry point
 *
 * the function will print the numbers
 * from 0 to 14 ten times
 *
 * Return: void function no return value
 *
 */
void more_numbers(void)
{
	int i;
	char a, c;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			c = a;
			if (a >= 10)
			{
				_putchar(1 + '0');
				c = a % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
