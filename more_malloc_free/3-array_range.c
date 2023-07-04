#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: Pointer to the newly created array
 *         NULL if min > max or if malloc fails
 **/

int *array_range(int min, int max)
{
	int *dev;
	int u;

	if (min > max)
		return (NULL);

	dev = malloc(sizeof(*dev) * ((max - min) + 1));

	if (dev == NULL)
		return (NULL);

	for (u = 0; min <= max; u++, min++)
		dev[u] = min;

	return (dev);
}
