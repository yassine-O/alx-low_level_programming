#include "main.h"

int check_seperators(char c);

/**
 * cap_string - Description
 * @str: pointer
 * Description: pointers
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i = 1;

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;

	while (str[i])
	{
		if (check_seperators(str[i]) && 'a' <= str[i + 1] && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		i++;
	}

	return (str);
}

/**
 * check_seperators - Separators of words
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;

	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
