#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n = 0;
	int a;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			*h = temp;
			n++;
		}
		else
		{
			*h = NULL;
			n++;
			break;
		}
	}
	*h = NULL;
	return (n);
}
