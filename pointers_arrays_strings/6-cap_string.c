#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: input string.
 *
 * Return: the poniter to dest.
 */
char *cap_string(char *str)
{
	int e = 0, i;
	int sptr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[e] >= 97 && str[e] <= 122)
		str[e] = str[e] - 32;
	e++;
	while (str[e] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (str[e] == sptr[i])
			{
				if ((str[e + 1] >= 97) && (str[e + 1] <= 122))
					str[e + 1] = str[e + 1] - 32;
				break;
			}
		}
		e++;
	}
	return (str);
}
