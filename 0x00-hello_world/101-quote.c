#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 when error
 *
 * program that print to the standard error
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(message, sizeof(char), sizeof(message) - 1, stderr);
	return (1);
}
