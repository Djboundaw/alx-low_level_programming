#include "lists.h"

/**
 * sum_listint - sum the datas of a linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all the data of a listint_t or 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head->next;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
