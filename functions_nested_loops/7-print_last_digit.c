#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: The number to be compute
 *
 * Return: Value of the last digit of a number
 */
int print_last_digit(int i)
{
	int ln;

	ln = (i % 10);

	if (i < 0)
	{
		ln = (ln * -1);
	}

	_putchar(ln + '0');

	return (ln);
}
