#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
			putchar('\n');
			break;
		}
		putchar(44);
		putchar(32);
	}
	return (0);
}
