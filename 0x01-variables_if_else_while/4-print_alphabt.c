#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all the alphabet
 * except the letters 'e' and 'q'z
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		if ('a' + i == 'e' || 'a' + i == 'q')
			continue;
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
