#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
