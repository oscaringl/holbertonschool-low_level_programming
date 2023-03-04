#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed.
 *
 * Return: void
 */
void print_line(int n)
{
	int ln;

	for (ln = 0; ln < n; ln++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
