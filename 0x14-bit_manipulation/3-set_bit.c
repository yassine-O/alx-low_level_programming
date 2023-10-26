#include "main.h"

/**
 * set_bit - Description
 * @n: int
 * @index: int
 * Description: Bitwise
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 0x01;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	k = k << index;

	if (k == 0)
		return (-1);

	*n |= k;

	return (1);
}
