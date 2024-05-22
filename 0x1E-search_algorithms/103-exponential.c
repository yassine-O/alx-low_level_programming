#include "search_algos.h"

void print_array(int *array, size_t l, size_t r);

/**
 * exponential_search - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, l, r, m;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}

	l = i / 2;
	r = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);

	while (l <= r)
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
