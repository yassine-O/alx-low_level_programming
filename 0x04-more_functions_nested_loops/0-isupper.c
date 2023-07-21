#include "main.h"

/**
 * _isupper - Description
 * @c : char input
 * Description: prints lower alphabets
 * Return: int
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
