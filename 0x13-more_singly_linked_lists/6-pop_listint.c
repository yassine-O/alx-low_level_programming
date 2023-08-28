#include "lists.h"

/**
 * pop_listint - Description
 * @head: struct
 * Description: linked list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
