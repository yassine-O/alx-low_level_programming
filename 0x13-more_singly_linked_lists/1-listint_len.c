#include "lists.h"

/**
 * listint_len - Description
 * @h: struct
 * Description: linked list
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
