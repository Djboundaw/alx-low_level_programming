#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - print elements of dlistint_t
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t temp;
	size_t n = 0;

	temp = h;
	while (temp != 0)
	{
		n += 1;
		temp = temp->next;
	}
	return (n);
}
