#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints to the standard error
 *
 * Return: 1
 */
int main(void)
{
	char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);
	return (1);
}
