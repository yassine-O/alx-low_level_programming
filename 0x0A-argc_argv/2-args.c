#include <stdio.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
