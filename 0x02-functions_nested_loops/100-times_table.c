#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 *
 * @n: a giver number
 *
 * Return: void
 */

void print_times_table(int n)
{
	int num, mult, res;

	if (n > 15 || n < 0)
		return;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			res = num * mult;
			_putchar(',');
			_putchar(' ');
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 100 && res > 9)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
