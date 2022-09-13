#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: the parameter where will start the count
 *
 * Return: it's a void function no return value
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
