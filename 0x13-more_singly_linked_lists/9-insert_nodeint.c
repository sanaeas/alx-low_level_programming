#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node in a given position
 *
 * @head: the head of the list
 * @idx: the index where the node should be added
 * @n: the data to be inserted
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
