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
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
			_putchar(c + '0');
		for (c = 10; c < 15; c++)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}

		_putchar('\n');
	}
}
