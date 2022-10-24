#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node
 *
 * Return: the head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);
	temp = (*head);
	n = temp->n;
	(*head) = temp->next;
	free(temp);
	return (n);
}
