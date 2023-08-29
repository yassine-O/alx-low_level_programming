#include "lists.h"

/**
 * get_nodeint_at_index - Description
 * @head: struct
 * @index: int
 * Description: linked list
 * Return: struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = NULL;

	while (head != NULL && i <= index)
	{
		if (i == index)
		{
			node = head;
			break;
		}
		i++;
		head = head->next;
	}

	return (node);
}
