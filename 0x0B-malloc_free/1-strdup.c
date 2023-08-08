#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Description
 * @str: pointer
 * Description: recursion
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(str));

	if (p == NULL)
		return (NULL);

	while (*str)
	{
		*(p + i) = *str;
		str++;
		i++;
	}

	return (p);
}
