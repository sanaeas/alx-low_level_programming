#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 * @n: given integer
 *
 * Return: 1 if n is positive, 0 if n is zero, and -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
