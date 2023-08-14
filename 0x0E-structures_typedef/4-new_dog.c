#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - Description
 * @name: string
 * @age: float
 * @owner: string
 * Description: pointers
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t *));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
