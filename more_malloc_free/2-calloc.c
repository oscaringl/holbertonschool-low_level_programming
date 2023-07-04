#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *u;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	u = malloc(nmemb * size);

	if (u == NULL)
		return (NULL);

	for (d = 0; d < (nmemb * size); d++)
		u[d] = 0;

	return (u);
}
