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
	dog_t *d;
	char *dname, *downer;
	int i, len1 = 0, len2 = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	dname = malloc(len1 + 1);
	downer = malloc(len2 + 1);

	if (dname == NULL || downer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		dname[i] = name[i];
	dname[i] = '\0';

	for (i = 0; i < len2; i++)
		downer[i] = owner[i];
	downer[i] = '\0';

	d->name = dname;
	d->age = age;
	d->owner = downer;

	return (d);
}
