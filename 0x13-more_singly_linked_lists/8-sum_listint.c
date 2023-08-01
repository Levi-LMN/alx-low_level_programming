#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n)
 * @head: Pointer to head of the list.
 * Levi's code
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

