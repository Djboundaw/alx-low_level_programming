#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: it's a void function no return value
 *
 * This function will display the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int c;

			c = i * j;
			if (j == 0)
				_putchar('0' + 0);
			else if (c < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar('0' + c);
			}
			else
			{
				_putchar(32);
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
			if (j == 9)
				break;
			_putchar(44);
		}
		_putchar(10);
	}
}
