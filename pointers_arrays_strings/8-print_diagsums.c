#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, j, suml = 0, sumr = 0;

	for (i = 0; i < size; ++i)
		suml += (a + i * size)[i];
	for (j = 0; j < size; ++j)
		sumr += (a + j * size)[--i];
	printf("%d, %d\n", suml, sumr);
}
