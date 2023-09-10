#include "main.h"

/**
 * clear_bit - Description
 * @n: int
 * @index: int
 * Description: Bitwise
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	return (1);
}
