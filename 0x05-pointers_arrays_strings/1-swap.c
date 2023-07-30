#include "main.h"

/**
 * swap_int - Description
 * @a : pointer
 * @b : pointer
 * Description: pointers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
