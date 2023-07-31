#include "main.h"

/**
 * _memset - Description
 * @s: pointer
 * @b: char
 * @n: int
 * Description: pointers
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (p);
}
