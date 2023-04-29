#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 *
 * @head: the head of the list
 *
 * Return: the removed head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	*head = temp;

	return (n);
}
