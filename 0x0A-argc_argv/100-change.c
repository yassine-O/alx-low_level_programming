#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, cents, n = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			n++;
		}
	}
	printf("%d\n", n);

	return (0);
}
