#include "lists.h"

/**
 * free_listint2 - Description
 * @head: struct
 * Description: linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return;


	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	head = NULL;
}
