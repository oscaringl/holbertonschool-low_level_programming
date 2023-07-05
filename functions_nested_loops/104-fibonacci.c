#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib_sum = 0;
	int count;

	printf("%lu, %lu", fib1, fib2);  // Print the first two Fibonacci numbers

	for (count = 3; count <= 98; count++)
	{
		fib_sum = fib1 + fib2;
		printf(", %lu", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("\n");

	return (0);
}
