#include "main.h"

/**
 * _isalpha - Description
 * @c : char input
 * Description: prints lower alphabets
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
