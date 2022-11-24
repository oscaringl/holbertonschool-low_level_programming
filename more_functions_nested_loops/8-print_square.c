#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	int sqr;

	for (sqr = 0; sqr < size; sqr++)
	{
		_putchar(35);
	}
	_putchar('\n');
}
