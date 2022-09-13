#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This program prints the 98 first
 * Fibonacci numbers
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long num1, num2, next_num;

	num1 = 1;
	num2 = 2;
	count = 2;
	printf("1\t%lu, 2\t%lu, ", num1, num2);
	while (count != 98)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		count++;
		if (count < 98)
			printf("%d\t%lu, ", count, next_num);
		else
			printf("%d\t%lu\n", count, next_num);
	}
	return (0);
}
