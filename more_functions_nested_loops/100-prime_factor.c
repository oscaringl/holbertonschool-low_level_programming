#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */
long int largest_prime_factor(long int n)
{
	long int factor = 2;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (n);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}
