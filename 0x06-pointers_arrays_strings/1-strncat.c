#include "main.h"

/**
 * _strncat - Description
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Description: pointers
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest)
		dest++;

	while (*src && n-- > 0)
		*dest++ = *src++;

	return (p);
}
