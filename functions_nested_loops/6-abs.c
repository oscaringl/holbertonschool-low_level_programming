#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @x: The number to be computed.
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
