#include "search_algos.h"

/**
 * interpolation_search - Description
 * @array: pointer
 * @size: int
 * @value: int
 * Description: search algorithm
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
	}

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
