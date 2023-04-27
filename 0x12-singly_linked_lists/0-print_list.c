#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of the linked list
 *
 * @h: the linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int nodes_num;

	nodes_num = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", temp->len, temp->str);
		nodes_num++;
		temp = temp->next;
	}
	return (nodes_num);
}
