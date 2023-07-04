#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: Pointer to the allocated memory
 * Exit with status value of 98 on failure
 **/

void *malloc_checked(unsigned int b)
{
	void *u;

	u = malloc(b);
	if (u == NULL)
		exit(98);
	return (u);
}
