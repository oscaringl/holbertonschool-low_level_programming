#include "seach_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * If value is not present in or if array is NULL, your function must return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	if (size == 1)
		return (*array == value ? *array : -1);
	if (array[size / 2] < value)
		return (advanced_binary(array + (size / 2) + 1, size / 2, value));
	if (array[size / 2] == value)
		return (array[size / 2]);
	return (advanced_binary(array, size / 2, value));
}
