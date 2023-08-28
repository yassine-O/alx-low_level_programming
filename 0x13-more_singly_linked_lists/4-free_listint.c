#include "lists.h"

/**
 * free_listint - Description
 * @h: struct
 * Description: linked list
 * Return: void
 */
void free_listint(const listint_t *h)
{
	if (h == NULL)
		return;

	free_listint(h->next);
	free(h);
}
