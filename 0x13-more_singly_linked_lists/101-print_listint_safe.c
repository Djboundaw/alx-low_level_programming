#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	size_t n;
	long int a;
	int x;

	n = 0;
	while (head)
	{
		a = head - head->next;
		n++;
		x = head->n;
		printf("[%p] %d\n", (void *)head, x);
		if (a <= 0)
		{
			x = (head->next)->n;
			temp = head->next;
			printf("-> [%p] %d\n", (void *)temp, (x));
			break;
		}
		else
			head = head->next;
	}
	return (n);
}
