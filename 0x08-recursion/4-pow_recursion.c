#include "main.h"

/**
 * _pow_recursion - Description
 * @x: int
 * @y: int
 * Description: recursion
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(y - 1));
}