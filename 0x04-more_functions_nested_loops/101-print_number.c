#include "main.h"

/**
 * print_number - Print the given number
 *
 * @n - a given number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= (-1);
	}

	if (n > 999)
		_putchar((n / 1000) + '0');
	if (n > 99)
		_putchar(((n / 100) % 10) + '0');
	if (n > 9)
		_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
