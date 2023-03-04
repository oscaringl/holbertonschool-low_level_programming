#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: c is an ascii character 99
 *
 * Return: 1 if c is lowercase or Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
