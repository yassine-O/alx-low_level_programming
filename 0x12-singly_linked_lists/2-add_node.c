#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Description
 * @head: structs
 * @str: string
 * Description: linked list
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int n = 0;
	list_t *new;

	while (str[n])
		n++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;

	return (new);
}
