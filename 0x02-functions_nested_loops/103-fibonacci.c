#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This program prints the sum of all the
 * Fibonacci numbers starting with 1 to
 * less than 4000000
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int i, num1, num2, next_num, sum;

	num1 = 1;
	num2 = 2;
	sum = 3;
	next_num = num1 + num2;
	sum = sum + next_num;
	for (i = 1; i < 30; i++)
	{
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
		sum = sum + next_num;
	}
	printf("%d\n", sum);
	return (0);
}
