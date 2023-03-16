#include "lists.h"

/**
 * add_dnodeint - function entry point
 * @head: first parameter head oof the linked list
 * @n: the data of the node to insert
 *
 * Return: the address of new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->next = *head;
	newNode->n = n;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
