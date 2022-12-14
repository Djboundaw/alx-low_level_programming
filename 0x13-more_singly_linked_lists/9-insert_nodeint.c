#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index where to add new node
 * @n: data of the new node
 *
 * Return: the address of the new node or NUL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
