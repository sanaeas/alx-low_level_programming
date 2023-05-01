#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 *
 * @head: the head of the linked list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_delete;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		to_delete = *head;
		*head = to_delete->next;
		free(to_delete);
		return (1);
	}

	temp = *head;
	to_delete = temp->next;
	while (i < index - 1)
	{
		if (to_delete == NULL)
			return (-1);
		temp = to_delete;
		to_delete = to_delete->next;
		i++;
	}

	temp->next = to_delete->next;
	free(to_delete);
	return (1);
}
