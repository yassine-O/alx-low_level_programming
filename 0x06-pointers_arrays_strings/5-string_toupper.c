#include "main.h"

/**
 * string_toupper - Description
 * @str: pointer
 * Description: pointers
 * Return: pointer
 */
char *string_toupper(char *str)
{
	char *up = str;

	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str -= 32;
		str++;
	}

	return (up);
}
