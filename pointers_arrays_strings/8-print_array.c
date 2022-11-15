#include "main.h"
#include "stdio.h"

/**
 * print_array - Prints n elements of an array of in, followed by a new line.
 * @a: an array of integers
 * @n: n number of elements of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
		printf(", ");
	}
	printf("\n");
}
