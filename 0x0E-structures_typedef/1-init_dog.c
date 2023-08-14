#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Description
 * @d: struct
 * @name: string
 * @age: float
 * @owner: string
 * Description: pointers
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
