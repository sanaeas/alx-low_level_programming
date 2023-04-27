#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: the head of the list
 * @str: the string to add
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *temp;
	unsigned int leng = 0;

	last = malloc(sizeof(list_t));
	if (!last)
		return (NULL);
	while (str && str[leng])
		leng++;
	last->str = str ? strdup(str) : NULL;
	last->len = leng;
	last->next = NULL;
	if (!(*head))
	{
		*head = last;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = last;
	}
	return (last);
}
