#include "search_algos.h"

/**
 * linear_search - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
