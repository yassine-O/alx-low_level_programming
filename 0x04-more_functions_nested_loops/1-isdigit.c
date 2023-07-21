#include "main.h"

/**
 * _isupper - Description
 * @c : char input
 * Description: prints lower alphabets
 * Return: int
 */
int _isupper(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
