#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _error(void);
int _isdigit(char *s);

/**
 * main - Entry point
 * @argc: int
 * @argv: pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int x, y, res;

	if (argc != 3)
		_error();

	a = argv[1];
	b = argv[2];

	if (!_isdigit(a) || !_isdigit(b))
		_error();

	x = atoi(a);
	y = atoi(b);

	res = x * y;

	printf("%d\n", res);

	return (0);
}

/**
 * _error - Description
 * Description: Error
 * Return: void
 */
void _error(void)
{
	printf("Error");
	exit(98);
}

/**
 * _isdigit - Description
 * @s : pointer
 * Description: prints lower alphabets
 * Return: int
 */
int _isdigit(char *s)
{
	if (!*s)
		return (0);

	while (*s)
	{
		if ('0' <= *s && *s <= '9')
			s++;
		else
			return (0);
	}
	return (1);
}
