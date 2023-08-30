#include "lists.h"

/**
 * reverse_listint - Description
 * @head: struct
 * Description: linked list
 * Return: void
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
		return (NULL);

	prev = *head;
	next = (*head)->next;
	(*head)->next = NULL;

	while (next != NULL)
	{
		*head = next;
		next = next->next;
		(*head)->next = prev;
		prev = *head;
	}

	return (*head);
}
