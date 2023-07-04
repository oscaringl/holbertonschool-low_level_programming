#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 **/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, ufirst, dev;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ufirst = dev = 0;
	while (s1[ufirst] != '\0')
		ufirst++;
	while (s2[dev] != '\0')
		dev++;

	str = malloc((ufirst + dev + 1) * sizeof(*s1));
	if (str == NULL)
		return (NULL);

	a = 0;
	while (a < ufirst)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;
	while (b <= dev)
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	return (str);
}
