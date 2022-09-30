#include <stdlib.h>
#include <stdio.h>

int is_number(char *s);

/**
 * main - Program that multiplies two numbers passed as arguments
 * @argc: number of command line arguments
 * @argv: an array containing the program command line args
 *
 * Return: 0 if it works, anothe number otherwise
 */
int main(int argc, char *argv[])
{
	int res;

	res = 0;
	if (argc <= 1)
		res = 0;
	else
	{
		while (--argc)
		{
			if (is_number(argv[argc]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[argc]);
		}
	}
	printf("%i\n", res);
	return (0);
}

/**
 * is_number - will check if a string is an integer
 * @s: the ctring to check
 *
 * Return: 0 if it's an integer, 1 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}
	return (0);
}
