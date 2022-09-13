#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will call the function putchar
 * to print the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar(10);
}
