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
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
