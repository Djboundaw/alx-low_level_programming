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
	int dgt1, dgt2, dgt3, dgt4;

	for (dgt1 = 0; dgt1 <= 9; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{
			for (dgt3 = 0; dgt3 <= 9; dgt3++)
			{
				if (dgt1 > dgt3)
					continue;
				for (dgt4 = 0; dgt4 <= 9; dgt4++)
				{
					if (dgt1 >= dgt2 && dgt2 >= dgt4)
						continue;
					putchar(dgt1 + '0');
					putchar(dgt2 + '0');
					putchar(' ');
					putchar(dgt3 + '0');
					putchar(dgt4 + '0');
					if (dgt1 == 9 && dgt2 == 8 && dgt3 == 9 && dgt4 == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	printf("\n");
	return (0);
}
