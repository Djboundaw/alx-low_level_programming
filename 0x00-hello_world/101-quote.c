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
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(txt, sizeof(char), sizeof(txt) - 1, stderr);
	return (1);
}
