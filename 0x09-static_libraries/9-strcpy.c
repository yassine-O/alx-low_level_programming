#include "main.h"
#include <string.h>

/**
 * _strcpy - Description
 * @dest: pointer
 * @src: pointer
 * Description: pointers
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
