#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int n1, n2, lena, lenb, na, nb;
	int k, r, i, j, size;
	char *res;

	if (argc != 3)
		_error();

	a = argv[1];
	b = argv[2];

	if (!_isdigit(a) || !_isdigit(b))
		_error();

	lena = strlen(a);
	lenb = strlen(b);

	size = lena + lenb;
	res = malloc(size);

	for (i = 0; i < size; i++)
		res[i] = '0';

	r = na = 0;
	for (i = lena - 1; i >= 0; i--)
	{
		n1 = a[i] - '0';
		nb = 0;
		for (j = lenb - 1; j >= 0; j--)
		{
			n2 = b[j] - '0';
			k = n1 * n2 + (res[na + nb] - '0') + r;
			res[na + nb] = k % 10 + '0';
			r = k / 10;
			nb++;
		}
		while (r > 0)
		{
			k = (res[na + nb] - '0') + r;
			res[na + nb] = k % 10 + '0';
			r = k / 10;
			nb++;
		}
		na++;
	}

	i = size - 1;
	while (i >= 0 && res[i] == '0')
		i--;

	while (i >= 0)
	{
		_putchar(res[i]);
		i--;
	}
	_putchar('\n');

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
