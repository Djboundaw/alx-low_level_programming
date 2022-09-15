#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * this program will print the largest prime factor
 * of the number 612852475143
 *
 * Return: always return 0 (success)
 */
int main(void)
{
	unsigned long n, i, largest;

	n = 612852475143;
	while (n >= 1)
	{
		for (i = 2; i <= n; i++)
		{
			if ((n % i) == 0)
			{
				largest = i;
				break;
			}
		}
		n = n / largest;
	}
	printf("%lu\n", largest);
	return (0);
}
