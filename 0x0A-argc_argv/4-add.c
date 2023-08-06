#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
