#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: a given number
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
