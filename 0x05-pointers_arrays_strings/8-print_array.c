#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of
 * an array of integers
 * @a: * before a - parameter for the array
 * @n: number of element to print
 *
 * Return: void function no return value
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		printf(", ");
	}
	printf("\n");
}
