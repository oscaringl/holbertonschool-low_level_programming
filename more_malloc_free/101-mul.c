#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * multiply - Multiplies two strings representing numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1, len2, i, j, carry, product;
	char *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + 
            (result[i + j + 1] - '0') + carry;
			result[i + j + 1] = product % 10 + '0';
			carry = product / 10;
		}
		result[i] += carry;
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (*num1 != '\0')
	{
		if (!_isdigit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}

	while (*num2 != '\0')
	{
		if (!_isdigit(*num2))
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}
