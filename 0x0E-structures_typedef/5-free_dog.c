#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Description
 * @d: struct
 * Description: pointers
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
