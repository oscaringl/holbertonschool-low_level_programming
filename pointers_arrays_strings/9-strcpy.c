#include "main.h"

/**
 * *_strcpy - copies the string *src, including (\0), to the buffer pointed.
 * @dest: destination
 * @src: string to be copied
 *
 * Return: te ponter to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
