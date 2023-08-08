#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Description
 * @s1: pointer
 * @s2: pointer
 * Description: recursion
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *str1, *str2;
	int i, len1, len2;

	str1 = (s1 != NULL) ? s1 : "";
	str2 = (s2 != NULL) ? s2 : "";

	while (*str1)
		len1++, str1++;

	while (*str2)
		len2++, str2++;

	p = malloc(len1 + len2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = 0; i < len2; i++)
		p[len1 + i] = s2[i];

	p[len1 + len2 + 1] = '\0';

	return (p);
}
