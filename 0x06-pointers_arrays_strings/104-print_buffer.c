#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the pointer of the buffer
 * @size: which content will be print
 *
 * Return: no return value - void function
 */
void print_buffer(char *b, int size)
{
	int i, j, byte;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x ", byte);
		for (i = 0; i < 10; i++)
		{
			if (i + byte < size)
				printf("%02x", b[i + byte]);
			else
				printf(" ");
			if (i % 2 != 0)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (b[j + byte] >= 31 && b[j + byte] <= 126)
				printf("%c", b[j + byte]);
			else
				printf(".");
			if (j + byte >= size - 1)
				break;
		}
		printf("\n");
	}
}
