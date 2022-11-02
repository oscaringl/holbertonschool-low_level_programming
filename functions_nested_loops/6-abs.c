#include "main.h"

/**
 * int _abs - function that computes the absolute value of an integer.
 * @i: The number to be computed.
 *
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
