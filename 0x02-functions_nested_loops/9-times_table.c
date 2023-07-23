#include "main.h"

/**
 * times_table - Description
 * Description: prints lower alphabets
 * void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (j == 0 && j == 0)
				_putchar('0');
			else if (n < 10)
			{
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
