#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a doubly linked list
 *
 * @head: the head node
 *
 * Return: Sum of all data | 0 (list is empty)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
