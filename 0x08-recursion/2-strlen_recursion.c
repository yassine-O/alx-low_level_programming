#include "main.h"

/**
 * _strlen_recursion - Description
 * @s: pointer
 * Description: recursion
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
