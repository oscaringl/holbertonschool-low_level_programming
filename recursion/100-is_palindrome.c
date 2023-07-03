#include "holberton.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return len;
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the string.
 * @end: The end index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] == s[end])
        return is_palindrome_helper(s, start + 1, end - 1);

    return 0;
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    return is_palindrome_helper(s, 0, len - 1);
}
