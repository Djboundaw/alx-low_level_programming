#include "lists.h"

/**
 * get_dnodeint_at_index - function entry point
 * @head: head of linked list
 * @index: index of the node to return
 *
 * Return: the nth node of linked list or NULL when failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
