#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	if (i % 2 != 0)
		j = (i - 1 ) / 2;
	else
		j = (i / 2);

	while (j < i)
		j++;
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
