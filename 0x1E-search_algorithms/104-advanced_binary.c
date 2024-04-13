#include "search_algos.h"

void print_array(int *array, size_t l, size_t r);
int recursive_binary(int *array, int value, int l, int r);

/**
 * advanced_binary - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, value, 0, size - 1));
}

/**
 * recursive_binary - Description
 * @array: pointer
 * @value: int
 * @l: int
 * @r: int
 * Description: search algorithm
 * Return: int
 */
int recursive_binary(int *array, int value, int l, int r)
{
	int m;

	if (l > r)
		return (-1);

	print_array(array, l, r);

	if (array[l] == value)
		return (l);

	m = (l + r) / 2;

	if (array[m] < value)
		return (recursive_binary(array, value, m + 1, r));
	else
		return (recursive_binary(array, value, l, m));
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
