#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  a function that frees a list
 *
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (!head)
		return;
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
