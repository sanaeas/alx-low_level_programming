#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: the head of the list
 *
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	if (!head)
		return (NULL);

	slow_ptr = head;
	fast_ptr = head;
	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (fast_ptr);
		}
	}
	return (NULL);
}
