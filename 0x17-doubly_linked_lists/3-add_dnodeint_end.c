#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: the head node
 * @n: the data to insert
 *
 * Return: the new element | NULL (failure)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		new->prev = NULL, *head = new;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}
