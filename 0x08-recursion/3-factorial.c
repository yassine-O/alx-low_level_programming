#include "main.h"

/**
 * factorial - Description
 * @n: int
 * Description: recursion
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
