#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_list - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @old_list: the old list to append
 * @new_size: size of the new list (always one more than the old list)
 * @new_node: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_realloc_list(listint_t **old_list, size_t new_size, listint_t *new_node)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(new_size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (i = 0; i < new_size - 1; i++)
		new_list[i] = old_list[i];
	new_list[i] = new_node;
	free(old_list);
	return (new_list);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num_nodes = 0;
	listint_t **list = NULL;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (num_nodes);

	while (*head != NULL)
	{
		for (i = 0; i < num_nodes; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num_nodes);
			}
		}
		num_nodes++;
		list = _realloc_list(list, num_nodes, *head);
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	free(list);
	return (num_nodes);
}

