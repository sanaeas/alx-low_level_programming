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
		if (ch == 101 || ch == 113)
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
