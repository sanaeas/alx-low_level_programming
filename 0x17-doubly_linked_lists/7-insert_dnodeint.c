#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: the head node
 * @idx: the index where the new node should be added
 * @n: the data to insert
 *
 * Return: the address of the new node | NULL (failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!h || !(*h))
		return (NULL);

	for (i = 0; temp && i < (idx - 1); i++)
		temp = temp->next;
	if (!temp)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	if (new->next)
		new->next->prev = new;
	return (new);
}
