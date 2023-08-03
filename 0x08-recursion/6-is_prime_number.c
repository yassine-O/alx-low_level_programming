#include "main.h"

int _prime(int k, int n);

/**
 * is_prime_number - Description
 * @n: int
 * Description: recursion
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_prime(2, n));
}

/**
 * _prime - Description
 * @k: int
 * @n: int
 * Return: int
 */
int _prime(int k, int n)
{
	if (k == n)
		return (1);

	if (k > n || n % k == 0)
		return (0);

	return (_prime(k + 1, n));
}
