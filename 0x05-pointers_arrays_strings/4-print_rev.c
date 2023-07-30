#include "main.h"
#include <string.h>

/**
 * print_rev - Description
 * @s : pointer
 * Description: pointers
 * Return: void
 */
void print_rev(char *s)
{
	int n = strlen(s) - 1;

	for (; n >= 0; n--)
		_putchar(*(s + n));

	_putchar('\n');
}
