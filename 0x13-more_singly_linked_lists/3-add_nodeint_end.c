#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to the first element of the linked list
 * @n: number to add
 *
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(int));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
