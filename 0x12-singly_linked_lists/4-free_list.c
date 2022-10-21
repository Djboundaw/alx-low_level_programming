#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: the linked list to free
 *
 * Return: void function
 */
void free_list(list_t *head)
{
	list_t *nextName;

	while (head)
	{
		nextName = head->next;
		free(head->str);
		free(head);
		head = nextName;
	}
/bin/bash: q: command not found
