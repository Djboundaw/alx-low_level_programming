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
	while (index != 1)
	{
		temp = temp->next;
		index--;
	}
	if (temp->next == NULL)
		return (1);

	temp1 = temp->next;
	if (temp1->next == NULL)
	{
		temp->next = NULL;
		return (1);
	}
	temp->next = temp1->next;
	temp1->next->prev = temp;

	return (1);
}
