#include "main.h"
#include <stddef.h>

/**
 * _strchr - Description
 * @s: pointer
 * @c: char
 * Description: pointers
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s)
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}

	return (p);
}
