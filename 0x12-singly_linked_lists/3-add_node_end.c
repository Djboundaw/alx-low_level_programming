#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: data to add
 *
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newName, *temp;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	newName = malloc(sizeof(list_t));
	if (!newName)
		return (NULL);
	newName->len = len;
	newName->str = strdup(str);
	newName->next = NULL;
	if (!*head)
	{
		*head = newName;
		return (newName);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newName;
	return (newName);
}
