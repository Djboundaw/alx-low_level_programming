#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This program prints the 50 first Fibonacci
 * numbers starting with 1
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int i, num1, num2, next_num;

	num1 = 1;
	num2 = 2;
	next_num = num1 + num2;
	printf("%d, %d, ", num1, num2);
	for (i = 3; i < 50; i++)
	{
		printf("%d, ", next_num);
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
		if (i == 49)
			printf("%d\n", next_num);
	}
	return (0);
}
