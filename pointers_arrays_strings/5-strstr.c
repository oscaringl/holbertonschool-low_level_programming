/**
 * _strstr - Locates the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; needle[j]; ++j)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
