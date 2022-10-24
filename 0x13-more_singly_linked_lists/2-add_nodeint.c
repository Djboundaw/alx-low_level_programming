#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: the head of the linked list
 * @n: number to add
 *
 * Return: the adress of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(int));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	return (*head);
}
