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
	char *str;
	int i, j, len = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[n++] = av[i][j];
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';

	return (str);
}
