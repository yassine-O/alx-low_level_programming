#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Description
 * @head: structs
 * @str: string
 * Description: linked list
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int n = 0;
	list_t *new;
	list_t *tmp = *head;

	while (str[n])
		n++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
