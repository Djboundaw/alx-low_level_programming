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
	int n, i, number;
	int coins[] = {25, 10, 5, 2, 1};

	number = 0, i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (is_number(argv[1]))
		{
			n = atoi(argv[1]);
			while (i <= 4 && n > 0)
			{
				while (n >= coins[i])
				{
					n -= coins[i];
					number++;
				}
				i++;
			}
		}
	}
	printf("%d\n", number);
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
			return (0);
	}
	return (1);
}
