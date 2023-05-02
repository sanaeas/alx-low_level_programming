#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list with a loop
 *
 * @h: the head of the list
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	void *visited[150];
	size_t count = 0, i;

	if (!h)
		return (0);
	current = *h;
	while (current)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				*h = NULL;
				return (count);
			}
		}
		visited[count++] = (void *)current;
		next = current->next;
		free(current);
		current = next;
	}
	*h = NULL;
	return (count);
}
