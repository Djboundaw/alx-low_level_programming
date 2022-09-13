#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return : it's a void function
 *
 * This function will print the
 * alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar(10);
}
