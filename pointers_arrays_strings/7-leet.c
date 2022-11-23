#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: input string.
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
			if (letters[j] == str[i])
				str[i] = numbers[j];
	return (str);
}
