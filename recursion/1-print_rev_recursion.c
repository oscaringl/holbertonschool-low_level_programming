#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if ('\0' == *s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
