#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list
 *
 * @head: the head of the linked list
 * @str: the string to add
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (0);
	length = 0;
	while (str && str[length])
		length++;
	temp->str = str ? strdup(str) : NULL;
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}
