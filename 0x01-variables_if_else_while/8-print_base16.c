#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch < 103; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
