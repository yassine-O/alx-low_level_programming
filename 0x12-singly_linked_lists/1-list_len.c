#include "lists.h"
#include <stdio.h>

/**
 * list_len - Description
 * @h: struct
 * Description: linked list
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
