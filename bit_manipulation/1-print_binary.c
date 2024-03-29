#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(unsigned long int) * 8;
	int flag = 0;

	mask <<= (bits - 1);

	if (n == 0)
		_putchar('0');

	while (mask)
	{
		if ((n & mask) || flag)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');

			flag = 1;
		}
		mask >>= 1;
	}
}
