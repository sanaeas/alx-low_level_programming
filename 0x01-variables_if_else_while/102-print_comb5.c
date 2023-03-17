#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, m, n1, m1;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			for (n1 = 48; n1 < 58; n1++)
			{
				for (m1 = 48; m1 < 58; m1++)
				{
					if ((n == n1 && m == m1) ||
					(n >= n1 && m > m1))
						continue;
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(n1);
					putchar(m1);
					if (n == 57 && m == 56 && n1 == 57 &&
					m1 == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
