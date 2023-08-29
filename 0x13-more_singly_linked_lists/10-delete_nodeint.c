#include "lists.h"

/**
 * delete_nodeint_at_index - Description
 * @head: struct
 * @index: int
 * Description: linked list
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *tmp2;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}

	return (-1);
}
