#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: number of command line arguments
 * @argv: an array containing the program command line args
 *
 * Return: 0 if it works, anothe number otherwise
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
