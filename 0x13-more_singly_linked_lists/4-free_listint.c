#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a list
 *
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
