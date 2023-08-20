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
	int bytes, i;
	int (*main_ptr)(int, char **) = main;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (unsigned char *) main_ptr;
	for (i = 0; i < bytes; i++)
		printf("%.2x ", opcode[i]);

	printf("\n");

	return (0);
}
