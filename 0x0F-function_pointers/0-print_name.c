#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Description
 * @name: pointer
 * @f: function pointer
 * Description: function pointers
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
