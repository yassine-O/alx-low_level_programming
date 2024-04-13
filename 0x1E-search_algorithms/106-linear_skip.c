#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - search algorithm
 * @list: pointer
 * @value: int
 * Return: pointer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *a, *b;

	if (list == NULL)
		return (NULL);

	b = list;
	do {
		a = b;
		b = b->express;
		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);
	} while (b->express != NULL && b->n < value);

	if (b->express == NULL)
	{
		a = b;
		while (b->next)
			b = b->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a->index, b->index);

	while (a != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);
		if (a->n == value)
			return (a);
		a = a->next;
	}

	return (NULL);
}
