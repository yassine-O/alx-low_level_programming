#include "main.h"
#include <stddef.h>

/**
 * _strspn - Description
 * @s: pointer
 * @accept: pointer
 * Description: pointers
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, k = 0;
	char *ch;

	while (*s)
	{
		ch = accept;
		while (*ch)
		{
			if (*s == *ch)
			{
				k++;
				break;
			}
			ch++;
		}

		if (*ch == '\0')
		{
			if (k > n)
				n = k;
			k = 0;
		}
		s++;
	}

	return (n);
}
