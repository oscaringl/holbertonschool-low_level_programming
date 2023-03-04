#include "main.h"

/**
 * jack_bauer - print every minute of Jack Bauer day´s from 00:00 to 23:59.
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int j, b;

	for (j = 0; j < 24; j++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
