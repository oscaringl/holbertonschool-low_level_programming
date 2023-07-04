#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 **/

char *_strdup(char *str)
{
	char *strDup;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strDup = malloc(sizeof(*str) * a);
	if (strDup == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strDup[b] = str[b];
		b++;
	}
	return (strDup);
}
