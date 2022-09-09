#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * betty style doc for function main goes there
 * this program will tell if the stored number
 * n is positive or negative
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is", n, lastDigit);
		printf(" greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is", n, lastDigit);
		printf(" less than 6 and not 0\n");
	}
	return (0);
}
