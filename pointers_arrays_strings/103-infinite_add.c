#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, carry, i;

	len1 = strlen(n1);
	len2 = strlen(n2);
	carry = 0;
	i = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';

		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		sum %= 10;

		r[i++] = sum + '0';
	}

	if (carry)
	{
		if (i >= size_r)
			return (0);

		r[i++] = carry + '0';
	}

	if (i >= size_r)
		return (0);

	r[i] = '\0';

	/* Reverse the string */
	len1 = 0;
	len2 = i - 1;

	while (len1 < len2)
	{
		char temp = r[len1];
		r[len1] = r[len2];
		r[len2] = temp;

		len1++;
		len2--;
	}

	return (r);
}
