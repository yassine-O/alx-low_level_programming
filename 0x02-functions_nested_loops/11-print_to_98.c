#include <stdio.h>

/**
 * print_to_98 - Description
 * @n: int input
 * Description: prints lower alphabets
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
}
