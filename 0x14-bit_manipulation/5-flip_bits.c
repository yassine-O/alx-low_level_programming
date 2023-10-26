#include "main.h"

/**
 * flip_bits - Description
 * @n: int
 * @m: int
 * Description: Bitwise
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	unsigned int b = 0;

	k = n ^ m;

	while (k)
	{
		b += k & 1;
		k = k >> 1;
	}

	return (b);
}
