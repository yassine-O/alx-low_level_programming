#include "main.h"

int _sqrt(int k, int n);

/**
 * _sqrt_recursion - Description
 * @n: int
 * Description: recursion
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - Description
 * @k: int
 * @n: int
 * Return: int
 */
int _sqrt(int k, int n)
{
	if (k > n)
		return (-1);

	if (k * k == n)
		return (k);

	return (_sqrt(k + 1, n));
}
