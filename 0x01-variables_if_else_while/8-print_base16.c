#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
		putchar(chr);

	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);

	putchar('\n');
	return (0);
}
