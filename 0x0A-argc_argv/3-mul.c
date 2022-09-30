#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers passed as arguments
 * @argc: number of command line arguments
 * @argv: an array containing the program command line args
 *
 * Return: 0 if it works, anothe number otherwise
 */
int main(int argc, char *argv[])
{
	int n, m;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%i\n", n * m);
	return (0);
}
