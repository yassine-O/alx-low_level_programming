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
	int i, k = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (n > pow(10, k + 1))
	{
		k++;
	}

	for (i = 0; i < k; i++)
	{
		_putchar('0' + (n / pow(10, k - i)));
		n %= (int) pow(10, k - i);
	}

	_putchar('0' + (n % 10));
}
