#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the head node of the list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
