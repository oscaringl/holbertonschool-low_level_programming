#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int dev = 0;

	while (*(s + dev) != '\0')
		dev++;
	return (dev);
}
