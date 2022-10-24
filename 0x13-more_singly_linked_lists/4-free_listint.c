#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node
 *
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
