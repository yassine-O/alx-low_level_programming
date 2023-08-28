#include "lists.h"

/**
 * print_listint - Description
 * @h: struct
 * Description: linked list
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
