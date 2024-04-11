#include "search_algos.h"

void print_array(int *array, size_t l, size_t r);

/**
 * binary_search - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l < r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - Description
 * @array: pointer
 * @l: int
 * @r: int
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
