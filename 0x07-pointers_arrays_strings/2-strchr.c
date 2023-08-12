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
	if (!c)
		return (c);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
