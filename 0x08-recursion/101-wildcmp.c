#include "main.h"

int _strlen(char *s);

/**
 * wildcmp - Description
 * @s1: pointer
 * @s2: pointer
 * Description: recursion
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if(*s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 != *s2)
		return (0);

	s2 = _next_char(s2);

	if(!*s2)
		return (1);


}

/**
 * _strlen - Description
 * @s: pointer
 * Return: int
 */
char *_next_char(char *s)
{
	if (*s == '*')
		return (_next_char(s + 1));

	return (s);
}

/**
 *  - Description
 * @s: pointer
 * @n: int
 * Return: int
 */
char * _find_char(char *s, char ch)
{
	if (!*s)
		return (NULL);

	if (*s == ch)
		return s;

	return _find_char(s + 1, ch);
}
