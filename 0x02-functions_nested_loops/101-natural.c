#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This program computes and prints the sum of
 * all the multiples of 3 of 5 below 1024
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
	}
	printf("Sum of all multiples of 3");
	printf(" or 5 below 1024 is %d\n", sum);
	return (0);
}
