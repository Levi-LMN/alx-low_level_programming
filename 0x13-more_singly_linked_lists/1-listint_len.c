#include "lists.h"

/**
 * listint_len - Returns  no. of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 * Levi's code
 * Return: The no. of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

