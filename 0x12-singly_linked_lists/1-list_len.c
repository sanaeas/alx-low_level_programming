#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 *
 * @h: the head of the linked list
 *
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int length;

	temp = h;
	length = 0;
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
