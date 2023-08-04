#include "main.h"

/**
 * _strcat - Description
 * @dest: pointer
 * @src: pointer
 * Description: pointers
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (p);
}
