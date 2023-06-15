#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: the head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
