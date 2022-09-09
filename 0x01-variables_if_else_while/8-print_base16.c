#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print the numbers of base 16
 * using putchar
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	for (letter = 'a'; letter <= 'f'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
