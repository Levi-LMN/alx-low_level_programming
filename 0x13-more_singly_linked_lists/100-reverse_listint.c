#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: double pointer to the head of the list.
 * Levi's code
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}

