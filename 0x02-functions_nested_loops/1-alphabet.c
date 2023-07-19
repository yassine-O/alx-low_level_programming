#include "main.h"

/**
 * print_alphabet
 * Description: prints lower alphabets
 * void
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');
}
