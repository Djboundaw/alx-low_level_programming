#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the first node
 *
 * Return: void function
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode, *deleteNode;

	deleteNode = *head;
	while (deleteNode)
	{
		nextNode = deleteNode->next;
		free(deleteNode);
		deleteNode = nextNode;
	}
	if(head)
		*head = NULL;
}
