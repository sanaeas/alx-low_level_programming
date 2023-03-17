#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int f;
	int s;
	int t;

	for (f = 48; f < 58; f++)
	{
		for (s = 48; s < 58; s++)
		{
			for (t = 48; t < 58; t++)
			{
				if ((f == s || s == t || f == t) ||
				(f > s || s > t))
					continue;
				putchar(f);
				putchar(s);
				putchar(t);
				if (f == 55 && s == 56 && t == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
