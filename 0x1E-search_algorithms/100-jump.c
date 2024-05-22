#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, m;

	if (array == NULL)
		return (-1);

	a = b = 0;
	m = sqrt(size);

	do {
		a = b;
		b += m;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	} while (b < size && array[b] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	while (a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
