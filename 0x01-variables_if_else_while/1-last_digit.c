#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %d is ", n);
	digit = 1;
	if (n < 0)
	{
		n = -n;
		digit = -1;
	}
	digit = digit * (n % 10);
	printf("%d ", digit);
	if (digit > 5)
		printf("and is greater than 5\n");
	else if (digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
