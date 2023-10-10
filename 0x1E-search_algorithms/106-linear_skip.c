#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = NULL;

	if (list == NULL)
		return (NULL);

	while (value > list->n && list->next)
	{
		current = list;
		list = list->express;
		if (!list)
		{
			list = current;
			while (list->next)
				list = list->next;
		}
		if (list != current->express)
			break;
		printf("Value checked at index [%ld] = [%d]\n",
			list->index, list->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		current->index, list->index);
	while (current && current->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			current->index, current->n);
		if (value == current->n)
			return (current);
		current = current->next;
	}

	return (NULL);
}
