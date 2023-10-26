#include "main.h"

/**
 * get_bit - Description
 * @n: int
 * @index: int
 * Description: Bitwise
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	return ((n >> index) & 1);
}
