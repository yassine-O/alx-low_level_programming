#include "main.h"

/**
 * print_binary - Description
 * @n: int
 * Description: Bitwise
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 32;
	while (i--)
		if (n >> i != 0)
			break;

	for (; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
