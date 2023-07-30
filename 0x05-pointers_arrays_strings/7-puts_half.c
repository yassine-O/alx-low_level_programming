#include "main.h"
#include <string.h>

/**
 * puts_half - Description
 * @str : pointer
 * Description: pointers
 * Return: void
 */
void puts_half(char *str)
{
	int i, n = strlen(str);

	if (n % 2 != 0)
		i = (n + 1) / 2;
	else
		i = n / 2;

	for (; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
