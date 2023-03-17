#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch < 91; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
