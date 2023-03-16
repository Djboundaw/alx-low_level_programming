#include "lists.h"

/**
 * insert_dnodeint_at_index - function entry point
 * @h: head of the linked list
 * @idx: where to insert new node
 * @n: data of the new node
 *
 * Return: address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;

	temp = *h;
	if (idx == 0)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		newNode = add_dnodeint_end(h, n);
		return (add_dnodeint_end(h, n));
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
