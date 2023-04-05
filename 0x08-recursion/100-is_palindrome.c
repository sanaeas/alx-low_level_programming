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
	if (*s)
		return (1 + strlen(s + 1));
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
		check(s, i + 1);
	}
	else
	{
		return (0);
	}
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
