#include "main.h"

/**
 * _strcmp - Description
 * @s1: pointer
 * @s2: pointer
 * Description: pointers
 * Return: dest pointer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}
