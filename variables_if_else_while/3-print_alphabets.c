#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase
 * And then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
