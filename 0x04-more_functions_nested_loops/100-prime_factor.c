#include <stdio.h>

int isPrime(long n);

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

	for (i = 2; i <= N; i++)
	{
		if (isPrime(i) && N % i == 0)
		{
			prime_factor = i;
			N /= i;
		}
	}

	printf("%li\n", prime_factor);

	return (0);
}

int isPrime(long n) {
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
