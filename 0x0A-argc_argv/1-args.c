#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program will print the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: an array containing the program command line args
 *
 * Return: 0 if it works, anothe number otherwise
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
