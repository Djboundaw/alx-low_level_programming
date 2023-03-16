#include "lists.h"

/**
 * free_dlistint - function entry point
 * @head: head of linked list
 *
 * Return: no return value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
