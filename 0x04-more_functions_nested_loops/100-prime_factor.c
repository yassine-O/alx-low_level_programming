#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i;
	long N = 612852475143;
	long prime_factor;

	for (i = 3; i <= N; i += 2)
	{
		while (N % i == 0)
		{
			prime_factor = i;
			N /= i;
		}
	}

	printf("%li\n", prime_factor);

	return (0);
}
