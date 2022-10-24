#include "lists.h"

/**
 * sum_listint - sum the datas of a linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all the data of a listint_t or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
