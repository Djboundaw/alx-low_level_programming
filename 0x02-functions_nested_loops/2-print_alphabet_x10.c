#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return : this is a void function
 *
 * This function will call 10 times
 * the function print_alphabet
 *
 */
void print_alphabet_x10(void)
{
	int j = 10;

	while (j > 0)
	{
		int i;

		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar(10);
		j--;
	}
}
