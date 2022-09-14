#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * This program prints the 98 first
 * Fibonacci numbers (very hard)
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int count = 0;
	unsigned long a, b, c;
	unsigned long a1, a2, b1, b2, c1, c2;

	a = 0;
	b = 1;
	for (count = 0; count < 92; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	a1 = a / 10000000000;
	b1 = b / 10000000000;
	a2 = a % 10000000000;
	b2 = b % 10000000000;
	for (count = 93; count <= 98; count++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if ((a2 + b2) > 9999999999)
		{
			c1 = c1 + 1;
			c2 = c2 % 10000000000;
		}
		printf("%lu%lu", c1, c2);
		if (count < 98)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	putchar('\n');
	return (0);
}
