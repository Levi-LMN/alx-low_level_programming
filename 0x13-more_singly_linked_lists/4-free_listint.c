#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * Levi's code
 * @head: Pointer to the head of the list to be freed.
 * Return: Null
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

