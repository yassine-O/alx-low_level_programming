#include "main.h"

/**
 * print_last_digit - Description
 * @n : int input
 * Description: Short description
 * Return: n
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r = -r;

	_putchar('0' + r);

	return (r);
}
