#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
