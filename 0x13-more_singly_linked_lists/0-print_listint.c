#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a list
 *
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t nodes_num;

	nodes_num = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes_num++;
		temp = temp->next;
	}
	return (nodes_num);
}
