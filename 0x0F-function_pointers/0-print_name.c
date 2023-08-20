#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Description
 * @name: pointer
 * @f: function pointer
 * Description: recursion
 * Return: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
