#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: a given character
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
