#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list
 *
 * @head: the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
