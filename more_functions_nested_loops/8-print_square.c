#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	int sqr, fl;

	if (sqr > 0)
	{
		for (sqr = 1; sqr <= size; sqr++)
		{
			for (fl = 1; fl <= size; fl++)
			{
				_putchar(35);
			}
			_putchar('\n');
	}
	_putchar('\n');
}
