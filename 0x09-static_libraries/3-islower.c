#include "main.h"

/**
 * _islower - Description
 * @c : char input
 * Description: prints lower alphabets
 * Return: 1 or 0
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
