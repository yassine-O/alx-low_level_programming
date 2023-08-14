#include "dog.h"
#include <stddef.h>
#include <stdio.h>

#define NIL(s) ((s != NULL) ? s : "(nil)")

/**
 * print_dog - Description
 * @d: struct
 * Description: pointers
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", NIL(d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", NIL(d->owner));
}
