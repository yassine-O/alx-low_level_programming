#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Description
 * @str: pointer
 * Description: recursion
 * Return: pointer
 */
char **strtow(char *str)
{
	char **words;
	int n = 0, m = 0, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] == ' ')
			n++;
	n++;

	words = malloc((n + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		k = 0;
		while (str[m + k] && str[m + k] != ' ')
			k++;

		words[i] = malloc(k + 1);
		if (words[i] == NULL)
		{
			while (i--)
				free(words[i]);
			free(words);

			return (NULL);
		}

		for (j = 0; j < k; j++)
		{
			words[i][j] = str[m + j];
		}
		words[i][j] = '\0';

		m += k + 1;
	}
	return (words);
}
