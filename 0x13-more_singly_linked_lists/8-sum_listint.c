#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 *
 * @head: the head of the linked list
 *
 * Return: the sum of the numbers
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
