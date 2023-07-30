#include "main.h"
#include <string.h>

/**
 * rev_string - Description
 * @s : pointer
 * Description: pointers
 * Return: void
 */
void rev_string(char *s)
{
	int i, n = strlen(s) - 1;
	char tmp;

	for (i = 0; i < n; i++, n--)
	{
		tmp = s[i];
		s[i] = s[n];
		s[n] = tmp;
	}
}
