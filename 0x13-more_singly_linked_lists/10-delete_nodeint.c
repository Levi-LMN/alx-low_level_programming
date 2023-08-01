#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: double pointer to the head of the list.
 * @index: index of the node to be deleted
 * Levi's code
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}

