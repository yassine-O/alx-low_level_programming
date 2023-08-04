#include "main.h"

/**
 * _isdigit - Description
 * @c : char input
 * Description: prints lower alphabets
 * Return: int
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
