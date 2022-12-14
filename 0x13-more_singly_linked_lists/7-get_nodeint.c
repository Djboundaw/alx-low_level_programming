#include "lists.h"

/**
 * get_nodeint_at_index - return a node from a linked list
 * @head: pointer to the first node
 * @index: rank of the node to return
 *
 * Return: the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
