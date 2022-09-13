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
	printf("%lu, %lu, ", num1, num2);
	while (count != 98)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		count++;
		if (count < 98)
			printf("%lu, ", next_num);
		else
			printf("%lu\n", next_num);
	}
	return (0);
}
