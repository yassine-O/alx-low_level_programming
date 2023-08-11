#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Description
 * @nmemb: int
 * @size: int
 * Description: recursion
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	return (p);
}
