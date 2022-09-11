#include <stdio.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
i * This program will print all possible
 * combination of two two-digits regarding some conditions
 */
int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = 0; dgt1 <= 99; dgt1++)
	{
		for (dgt2 = dgt1 + 1; dgt2 <= 99; dgt2++)
		{
			putchar(dgt1 / 10 + '0');
			putchar(dgt1 % 10 + '0');
			putchar(' ');
			putchar(dgt2 / 10 + '0');
			putchar(dgt2 % 10 + '0');
			if (dgt1 == 98 && dgt2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
