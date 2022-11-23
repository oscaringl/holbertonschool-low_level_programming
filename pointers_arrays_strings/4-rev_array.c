#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: noting.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (a[i] != '\0')
		i++;
	i = i -1;

	while (i != n && i > n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i--;
		n++;
	}
}
