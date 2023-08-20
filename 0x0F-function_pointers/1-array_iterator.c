#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Description
 * @array: pointer
 * @size: int
 * @action: function pointer
 * Description: function pointers
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
