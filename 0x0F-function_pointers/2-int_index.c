#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Description
 * @array: pointer
 * @size: int
 * @cmp: function pointer
 * Description: function pointers
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
