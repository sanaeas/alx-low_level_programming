#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: the head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *visited[150];
	int fl = 0;
	size_t count = 0, i;

	while (current != NULL)
	{
		fl = 0;
		for (i = 0; i < count; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current,
					current->n);
				fl = 1;
				break;
			}
		}
		if (fl)
			return (count);
		printf("[%p] %d\n", (void *)current, current->n);
		visited[count++] = current;
		current = current->next;
		if (count >= 150)
			break;
	}
	return (count);
}
