#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int e, i;

	i = 0;

	while (i <= 9)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		i++;
		_putchar('\n');
	}
}
