#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
