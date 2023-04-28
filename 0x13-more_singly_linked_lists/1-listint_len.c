#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list
 *
 * @h: the head of the list
 *
 * Return: the number of the elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int len;

	temp = h;
	len = 0;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
