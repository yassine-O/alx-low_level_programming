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
	unsigned long int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
