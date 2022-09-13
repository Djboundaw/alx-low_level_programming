#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This program prints the sum of Fibonacci
 * numbers which are less than 4000000
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int num1, num2, next_num, sum;

	num1 = 1;
	num2 = 2;
	sum = num2;
	while (next_num <= 4000000)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		if (next_num % 2 == 0)
			sum += next_num;
	}
	printf("%d\n", sum);
	return (0);
}
