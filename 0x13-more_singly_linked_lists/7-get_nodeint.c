#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 *
 * @head: the head of the list
 * @index: the index of the node we're looking for
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
