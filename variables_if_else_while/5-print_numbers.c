#include <stdio.h>

/**
 * main - This program prints all single digit numbers of base10 starting
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
		printf("%d", digit++);
	printf("\n");
	return (0);
}
