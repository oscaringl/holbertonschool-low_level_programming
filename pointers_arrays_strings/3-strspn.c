/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing the characters to accept.
 *
 * Return: The number of bytes in the initial segment of s consisting
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				++n;
				break;
			}
		}
		if (!(accept[j]))
			return (n);
	}
	return (n);
}
