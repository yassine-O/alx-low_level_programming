#include "main.h"

/**
 * more_numbers - Description
 * Description: prints lower alphabets
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar('0' + j % 10);

		}
		_putchar('\n');
	}
}
