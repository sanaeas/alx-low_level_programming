#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: a given number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;

	current = n >> 1;
	if (current)
		print_binary(current);
	current <<= 1;
	if (current == n)
		_putchar('0');
	else
		_putchar('1');
}
