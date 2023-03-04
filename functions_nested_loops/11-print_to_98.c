#include "stdio.h"
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 *
 * @n: The number to be computed.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
		printf("98\n");
}
