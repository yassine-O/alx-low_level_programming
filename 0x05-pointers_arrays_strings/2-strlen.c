#include "main.h"

/**
 * _strlen - Description
 * @s : pointer
 * Description: pointers
 * Return: int
 */
int _strlen(char *s)
{
	int i, n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		n++;

	return (n);
}
