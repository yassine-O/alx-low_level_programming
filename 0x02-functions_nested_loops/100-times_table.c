#include "main.h"

/**
 * print_times_table - Description
 * @n: int input
 * Description: prints lower alphabets
 * void
 */
void print_times_table(int n)
{
	int i, j, k, q;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			q = 1000;

			if (j == 0 && j == 0)
				_putchar('0');
			else
			{
				while (k < q && q != 1)
				{
					_putchar(' ');
					q /= 10;
				}
				while (q >= 1)
				{
					_putchar('0' + k / q);
					k %= q;
					q /= 10;
				}
			}

			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
