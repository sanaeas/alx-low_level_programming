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
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, 1, sizeof(s), stderr);
	return (1);
}
