#include "main.h"

/**
 * _memcpy - Description
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Description: pointers
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (p);
}
