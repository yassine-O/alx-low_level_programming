#include "main.h"

/**
 * get_endianness - Description
 * Description: Bitwise
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
