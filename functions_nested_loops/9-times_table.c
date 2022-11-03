#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: empty
 */
void times_table(void)
{
	int a, b, i;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			i = (a * b);
			_putchar(',');
			_putchar(' ');
			if (i <= 9)
			{
				_putchar(' ');
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
