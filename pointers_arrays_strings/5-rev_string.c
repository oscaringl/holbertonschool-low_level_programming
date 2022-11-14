#include "main.h"

/**
 * rev_string - reverses a string.
 * @S: reverse string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, m, e;
	char a, z;

	i = 0;
	while (*i != '\0')
	{
		i++;
	}
	m = i -1;
	e = m / 2;
	while (e >= 0)
	{
		a = s[m - e];
		z = s[e];
		*m = a;
		s[m - e] = z;
		e--;
	}
}
