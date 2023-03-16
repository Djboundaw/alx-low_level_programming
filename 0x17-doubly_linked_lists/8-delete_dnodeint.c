#include "lists.h"

/**
 * delete_dnodeint_at_index - function entry point
 * @head: head of the linked list
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		return (1);
	}
	temp = *head;
	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	temp1 = temp;
	temp1->prev->next = temp->next;
	temp->next->prev = temp1->prev;
	free(temp);

	if (temp != NULL)
		return (-1);
	return (1);
}
