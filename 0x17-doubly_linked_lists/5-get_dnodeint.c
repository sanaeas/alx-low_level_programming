#include "lists.h"

/**
 * get_dnodeint_at_index - Find the nth node of a dlistint_t linked list
 *
 * @head: the head node
 * @index: the index of the node
 *
 * Return: the nth node | NULL (node does not exist)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	int i;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
