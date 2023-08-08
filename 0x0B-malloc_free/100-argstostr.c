#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Description
 * @ac: int
 * @av: pointer
 * Description: recursion
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *str, *p;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(len);

	if (str == NULL)
		return (NULL);

	p = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*p++ = av[i][j];
		*p = '\n';
		p++;
	}
	*p = '\0';

	return (str);
}
