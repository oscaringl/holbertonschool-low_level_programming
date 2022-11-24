#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int trg, fl;

	for (trg = 0; trg < size; trg++)
	{
		for (fl = 1; fl < (size - trg); fl++)
			_putchar(' ');
		for (fl--; fl < size; fl++)
			_putchar('#');
		if (trg < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
