#include "main.h"

/**
 * _puts_recursion - Description
 * @s: pointer
 * Description: recursion
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(++s);
}
