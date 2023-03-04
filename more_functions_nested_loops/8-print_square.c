#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	int sq, fl;

	if (size > 0)
	{
		for (sq = 1; sq <= size; sq++)
		{
			for (fl = 1; fl <= size; fl++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
