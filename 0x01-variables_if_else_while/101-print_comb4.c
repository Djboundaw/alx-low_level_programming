#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all possible
 * combination of three digits regarding some conditions
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			if (digit1 >= digit2)
				continue;
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				if (digit2 >= digit3)
					continue;
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
