#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0,  z = 0;

	while (dest[a] != '\0')
		a++;

	while (src[z] != '\0')
	{
		dest[a] = src[z];
		a++;
		z++;
	}
	return (dest);
}
