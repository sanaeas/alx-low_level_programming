#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size), i;
	listint_t *tmp = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	while (value > list->n && list->next)
	{
		tmp = list;
		for (i = 0; i < step && list->next; i++)
			list = list->next;

		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		tmp->index, list->index);

	while (tmp && tmp->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		if (value == tmp->n)
			return (tmp);
		tmp = tmp->next;
	}

	return (NULL);
}
