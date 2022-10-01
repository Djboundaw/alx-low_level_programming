#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error \n");
	return (1);
}
