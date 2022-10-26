#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newNode, *temp;

	newNode = NULL;
	temp = NULL;
	while (*head)
	{
		newNode = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = newNode;
	}
	*head = temp;
	return (*head);
}
