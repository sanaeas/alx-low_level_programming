#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int num, mult, result;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		for (mult = 1; mult < 10; mult++)
		{
			result = num * mult;
			_putchar(',');
			_putchar(' ');

			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
