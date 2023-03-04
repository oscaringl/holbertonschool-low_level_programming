#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int dg, e;

	for (dg = 0; dg < n; dg++)
	{
		for (e = 0; e < dg; e++)
		{
			_putchar(32);
		}
		_putchar(92);
		if (dg < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
