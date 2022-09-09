#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print the alphabet in reverse order
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)
	{
		printf("%c", letter);
	}
	printf("\n");
	return (0);
}
