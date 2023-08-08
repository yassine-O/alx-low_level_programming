#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Description
 * @size: int
 * @c: char
 * Description: recursion
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	while (size--)
		*(arr + size) = c;

	return (arr);
}
