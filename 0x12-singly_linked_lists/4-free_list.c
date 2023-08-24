#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Description
 * @head: struct
 * Description: linked list
 * Return: int
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free_list(head->next);
	free(head);
}
