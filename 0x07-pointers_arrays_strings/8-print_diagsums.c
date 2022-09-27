#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: the name of matrix
 * @size: size of the matrix a
 *
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum_diag1, sum_diag2;

	sum_diag1 = 0, sum_diag2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + size - 1 - i);
	}
	printf("%ld, %ld\n", sum_diag1, sum_diag2);
}
