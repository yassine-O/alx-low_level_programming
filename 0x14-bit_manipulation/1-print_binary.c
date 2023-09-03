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

	if (n == 0 || n > 4294967295)
	{
		_putchar('0');
		return;
	}

	i = 31;
	while (n >> i == 0)
		i--;

	for (; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
