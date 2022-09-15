#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 * this program will print the numbers
 * from 0 to 100 replacing some numbers by text
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
