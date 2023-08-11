#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, lens1 = strlen(s1);

	str = malloc(lens1 + n + 1);

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
