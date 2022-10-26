#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to the first node
 *
 * Return: address of node where loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *loop2;

	loop = head, loop2 = head;
	if (!head)
		return (NULL);
	while (loop && loop2 && loop2->next)
	{
		loop2 = (loop2->next)->next;
		loop = loop->next;
		if (loop2 == loop)
		{
			loop = head;
			while (loop != loop2)
			{
				loop = loop->next;
				loop2 = loop2->next;
			}
			return (loop2);
		}
	}
	return (NULL);
}
