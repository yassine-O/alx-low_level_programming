#include "main.h"

int _strlen(char *s);
int _palindrome(char *s, int n);

/**
 * is_palindrome - Description
 * @s: pointer
 * Description: recursion
 * Return: int
 */
int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (!n)
		return (1);

	return (_palindrome(s, n));
}

/**
 * _strlen - Description
 * @s: pointer
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * _palindrome - Description
 * @s: pointer
 * @n: int
 * Return: int
 */
int _palindrome(char *s, int n)
{
	if (n <= 1)
		return (1);

	if (s[0] != s[n - 1])
		return (0);

	return (_palindrome(s + 1, n - 2));
}
