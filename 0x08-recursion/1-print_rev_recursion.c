#include "main.h"

/**
 * _print_rev_recursion - Description
 * @s: pointer
 * Description: recursion
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
