#include "main.h"

/**
 * print_last_digit - Description
 * @n : int input
 * Description: Short description
 * Return: n
 */
int print_last_digit(int n)
{
	while (n >= 10)
		n %= 10;
	return (n);
}
