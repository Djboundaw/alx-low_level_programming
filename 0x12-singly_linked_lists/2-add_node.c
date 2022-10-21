#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the head of linked list
 * @str: data to add
 *
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newName;
	int len;

	len = strlen(str);
	newName = malloc(sizeof(list_t));
	if (!newName)
		return (NULL);
	newName->str = strdup(str);
	newName->len = len;
	newName->next = (*head);
	(*head) = newName;
	return (*head);
}
