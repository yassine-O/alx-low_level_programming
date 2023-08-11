#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Description
 * @s1: pointer
 * @s2: pointer
 * @n: int
 * Description: malloc
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, lens1 = strlen(s1);

	str = malloc(lens1 + n + 1);

	if (str == NULL)
		return (NULL);

	if (n > strlen(s2))
		n = strlen(s2);

	for (i = 0; i < lens1 + n; i++)
	{
		if (i < lens1)
			str[i] = s1[i];
		else
			str[i] = s2[i - lens1];
	}
	str[i] = '\0';

	return (str);
}
