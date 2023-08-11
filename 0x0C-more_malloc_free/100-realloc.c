#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Description
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Description: recursion
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *tmp;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;

	tmp = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = tmp[i];

	free(ptr);

	return (p);
}
