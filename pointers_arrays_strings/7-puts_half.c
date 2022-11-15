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
	i = i - 1;
	j = i / 2;

	if (i % 2 == 1)
		j = (i - 1 ) / 2;

	while (str[i] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
