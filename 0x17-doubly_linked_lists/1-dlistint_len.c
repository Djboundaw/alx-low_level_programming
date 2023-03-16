#include "lists.h"

/**
 * dlistint_len - function entry point
 * @h: argument the head of linked list
 *
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
