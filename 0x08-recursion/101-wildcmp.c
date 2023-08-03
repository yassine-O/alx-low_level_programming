#include "main.h"

/**
 * wildcmp - Description
 * @s1: pointer
 * @s2: pointer
 * Description: recursion
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (!*(s2 + 1))
			return (1);
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	return (0);
}
