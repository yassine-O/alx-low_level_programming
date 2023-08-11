#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Description
 * @min: int
 * @max: int
 * Description: recursion
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		arr[i] = min + i;

	return (arr);
}
