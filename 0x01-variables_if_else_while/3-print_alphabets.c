#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all the letters from a to z
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		printf("%c", letter);
	}
	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		printf("%c", letter);
	}
	printf("\n");
	return (0);
}
