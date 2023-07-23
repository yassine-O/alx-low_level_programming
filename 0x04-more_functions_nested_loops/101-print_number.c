#include "main.h"
#include <math.h>

/**
 * print_number - Description
 * @n : int input
 * Description: prints lower alphabets
 * Return: void
 */
void print_number(int n)
{
	int q = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (n > q * 10)
	{
		q *= 10;
	}

	for (; q >= 1; q /= 10)
	{
		_putchar('0' + (n / q));
		n %= q;
	}
}
