#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry function
 * @argc: the number of arguments
 * @argv: pointer to the arguments
 *
 * Return: the result of choosen operation
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = (*get_op_func)(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", func(a, b));
	return (0);
}
