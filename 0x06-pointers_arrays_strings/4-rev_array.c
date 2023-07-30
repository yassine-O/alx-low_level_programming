#include "main.h"

/**
 * reverse_array - Description
 * @a: pointer
 * @n: int
 * Description: pointers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (int i = 0; i < --n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
