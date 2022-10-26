#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	while (i < index - 1)
	{
		if (!temp->next)
			return (-1);
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
