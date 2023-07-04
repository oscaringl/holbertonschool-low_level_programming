#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_valid_number - Checks if a string represents a valid number
 * @number: The string to be checked
 *
 * Return: 1 if the string represents a valid number, 0 otherwise
 **/

int is_valid_number(char *number)
{
	int i = 0;

	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return 0;
		i++;
	}

	return 1;
}

/**
 * multiply_numbers - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: 0 on success
 */
int multiply_numbers(char *num1, char *num2)
{
	int i, j, len1, len2, total_len;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	total_len = len1 + len2;
	result = calloc(total_len, sizeof(int));

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int p1 = i + j, p2 = i + j + 1;
			int sum = mul + result[p2];

			result[p1] += sum / 10;
			result[p2] = sum % 10;
		}
	}

	i = 0;
	while (i < total_len && result[i] == 0)
		i++;

	if (i == total_len)
		printf("0\n");
	else
	{
		while (i < total_len)
			printf("%d", result[i++]);
		printf("\n");
	}

	free(result);

	return 0;
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	multiply_numbers(argv[1], argv[2]);

	return 0;
}
