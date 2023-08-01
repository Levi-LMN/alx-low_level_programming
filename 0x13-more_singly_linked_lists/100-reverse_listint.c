#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @h: double pointer
 * Levi's code
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *previous, *next;

	if (h == NULL || *h == NULL)
		return (NULL);
	if ((*h)->next == NULL)
		return (*h);
	previous = NULL;
	while (*h != NULL)
	{
		next = (*h)->next;
		(*h)->next = previous;
		previous = *h;
		*h = next;
	}
	*h = previous;
	return (*h);
}

