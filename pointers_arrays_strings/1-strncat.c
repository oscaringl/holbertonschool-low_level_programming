#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes used from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] = n && src[i] != '\0')
		i++;
	dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
