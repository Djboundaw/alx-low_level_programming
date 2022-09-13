#include "main.h"
/**
 * print_times_table - Entry point
 * @n: number of times_table
 *
 * Return: it's a void function no return value
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar(0 + '0');
				else if (i * j < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(i * j + '0');
				}
				else if (i * j < 100)
				{
					_putchar(32);
					_putchar(32);
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar(32);
					_putchar((i * j) / 100 + '0');
					_putchar(((i * j) % 100) / 10 + '0');
					_putchar(((i * j) % 100) % 10 + '0');
				}
				if (j == n)
					break;
				_putchar(44);
			}
			_putchar('\n');
		}
	}
}
