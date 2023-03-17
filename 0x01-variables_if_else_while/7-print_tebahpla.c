#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 122; ch > 96; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
