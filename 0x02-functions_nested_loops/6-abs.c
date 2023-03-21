#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @n:  a given number
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
