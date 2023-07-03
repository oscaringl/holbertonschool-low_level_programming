#include "holberton.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - check if a number is prime
 *
 * @n: the number
 *
 * Return: 0 if number is less than 2 or not prime, otherwise 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
