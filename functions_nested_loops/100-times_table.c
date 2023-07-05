#include "main.h"

/**
 * print_number - Prints a number with a specified width
 * @num: The number to be printed
 * @width: The minimum width of the number
 *
 * Return: void
 */
void print_number(int num, int width)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (width >= 100)
		_putchar((num / 100) + '0');
	if (width >= 10)
		_putchar(((num / 10) % 10) + '0');

	_putchar((num % 10) + '0');
}

/**
 * print_times_table - Prints the n times table
 * @n: The number of times to print the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j != 0)
				_putchar(' ');

			print_number(result, n * n);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
