#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to head of the list.
 * Levi's code
 * Return: no. of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		/* Detect if there is a cycle */
		if (slow == fast)
		{
			/* Move slow back to the head to find the start of the cycle */
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
				fast = fast->next;
			}

			/* Now both slow and fast are at the start of the cycle */
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

			/* Print the rest of the cycle (up to the start again) */
			slow = slow->next;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
			}
			break;
		}
	}

	return (count);
}

