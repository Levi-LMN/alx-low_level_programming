#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	slow_ptr = fast_ptr = head;
	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			break;
		}
	}
	if (!slow_ptr || !fast_ptr || !fast_ptr->next)
		return (NULL);
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (fast_ptr);
}

