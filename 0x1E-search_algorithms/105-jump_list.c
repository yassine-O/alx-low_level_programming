#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Description
 * @list: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: pointer
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, m;
	listint_t *a, *b;

	if (list == NULL)
		return (NULL);

	m = sqrt(size);
	b = list;
	do {
		a = b;
		i = m;
		while (i-- && b->next != NULL)
			b = b->next;
		printf("Value checked array[%ld] = [%d]\n", b->index, b->n);
		if (b->n == value)
			return (b);
	} while (b->next != NULL && b->n < value);

	printf("Value found between indexes [%ld] and [%ld]\n", a->index, b->index);

	while (a != NULL)
	{
		printf("Value checked array[%ld] = [%d]\n", a->index, a->n);
		if (a->n == value)
			return (a);
		a = a->next;
	}

	return (NULL);
}
