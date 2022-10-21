#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t
 * @h: list we'll be printing
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("[%d] ", h->len);
		if (!h->str)
			printf("(nil)\n");
		else
			printf("[%s]\n", h->str);
		h = h->next;
		n++;
	}
	return (n);
}
