#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: a given number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
