#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc_list - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @old_list: the old list to append
 * @new_size: size of the new list (always one more than the old list)
 * @new_node: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_realloc_list(const listint_t **old_list,
		size_t new_size, const listint_t *new_node)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(new_size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free((void *)old_list);
		exit(98);
	}

	for (i = 0; i < new_size - 1; i++)
		new_list[i] = old_list[i];
	new_list[i] = new_node;

	free((void *)old_list);
	return (new_list);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 *                      Checks for cycles in the list to avoid infinite loops.
 *
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free((void *)list);
				return (num);
			}
		}
		num++;
		list = _realloc_list(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free((void *)list);
	return (num);
}

