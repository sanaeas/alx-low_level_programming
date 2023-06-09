#include "main.h"

/**
 * _strlen - returns the string length
 *
 * @s: a given string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s)
		len = 1 + _strlen(s + 1);
	return (len);
}

/**
 * check - checks if the string is a palindrome
 *
 * @s: a given string
 * @i: index
 *
 * Return: 1 if s is a palidrome, 0 if not
 */
int check(char *s, int i)
{
	int len = _strlen(s) - (i + 1);

	if (s[i] == s[len])
	{
		if (i + 1 == len || i == len)
			return (1);
		return (check(s, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - calls check function
 *
 * @s: a given string
 *
 * Return: 1 if s is a palidrome
 */
int is_palindrome(char *s)
{
	return (check(s, 0));
}
