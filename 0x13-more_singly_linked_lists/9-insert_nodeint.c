#include "lists.h"

/**
 * insert_nodeint_at_index - Description
 * @head: struct
 * @idx: int
 * @n: int
 * Description: linked list
 * Return: struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	tmp = *head;
	while (i != idx - 1 || tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
