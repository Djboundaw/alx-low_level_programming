#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all possible
 * combination of two digits
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			if (digit1 >= digit2)
				continue;
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			if (digit1 == 8 && digit2 == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
