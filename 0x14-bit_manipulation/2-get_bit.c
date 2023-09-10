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
	return ((n >> index) & 1);
}
