#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	long int a;

	n = 0;
	while (head)
	{
		a = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (a <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (n);
}
