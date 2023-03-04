#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int c, i;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
