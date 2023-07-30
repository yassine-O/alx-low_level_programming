#include "main.h"
#include <string.h>

/**
 * puts2 - Description
 * @str : pointer
 * Description: pointers
 * Return: void
 */
void puts2(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
