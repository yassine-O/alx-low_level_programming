#include "lists.h"

/**
 * sum_listint - Description
 * @head: struct
 * Description: linked list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
