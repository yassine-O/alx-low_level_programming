#include "main.h"

/**
 * binary_to_uint - Description
 * @b: pointer
 * Description: Bitwise
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, k, len;
	int i;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len])
		len++;

	n = 0;
	k = 1;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n += k * (b[i] - '0');
		k *= 2;
	}

	return (n);
}
