#include "main.h"

/**
 * print_binary - Description
 * @n: int
 * Description: Bitwise
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	char b[32];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n)
	{
		if (n & 1)
			b[i] = '1';
		else
			b[i] = '0';
		n = n >> 1;
		i++;
	}

	while (i--)
		_putchar(b[i]);
}
