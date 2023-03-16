#include "lists.h"

/**
 * add_dnodeint_end - function entry point
 * @head: head of linked list
 * @n: data of the new node
 *
 * Return: address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tail;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;
	
	newNode->next = NULL;
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newNode;
	newNode->prev = tail;

	return (newNode);
}
