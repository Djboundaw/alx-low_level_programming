#include "lists.h"

/**
 * list_len - function that reurns number of elements in linked list
 * @h: the linked list
 *
 * Return: n number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
