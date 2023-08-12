#include "main.h"

/**
 * leet - Description
 * @str: pointer
 * Description: pointers
 * Return: pointer
 */
char *leet(char *str)
{
	int i;
	char *tmp;

	char src[] = {'a', 'e', 'o', 't', 'l'};
	char dest[] = {'4', '3', '0', '7', '1'};

	tmp = str;
	while (*tmp)
	{
		for (i = 0; src[i]; i++)
			if (*tmp == src[i] || *tmp == src[i] - 32)
			{
				*tmp = dest[i];
				break;
			}
		tmp++;
	}

	return (str);
}
