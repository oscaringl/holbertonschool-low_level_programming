#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = '0';
	int a_f = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (a_f <= 'f')
	{
		putchar(a_f);
		a_f++;
	}
	putchar('\n');
	return (0);
}
