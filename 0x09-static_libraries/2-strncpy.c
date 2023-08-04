#include "main.h"

/**
 * _strncpy - Description
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Description: pointers
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src && n-- > 0)
		*dest++ = *src++;

	while (n-- > 0)
		*dest++ = '\0';

	return (p);
}
