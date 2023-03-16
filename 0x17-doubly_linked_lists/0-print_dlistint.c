#include "lists.h"

/**
 * print_dlistint - print elements of dlistint_t
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n ++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
