#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Description
 * @a: int
 * @b: int
 * Description: function pointers
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Description
 * @a: int
 * @b: int
 * Description: function pointers
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Description
 * @a: int
 * @b: int
 * Description: function pointers
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Description
 * @a: int
 * @b: int
 * Description: function pointers
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Description
 * @a: int
 * @b: int
 * Description: function pointers
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
