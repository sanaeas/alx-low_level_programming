#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long num, i;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}

	printf("%lu\n", num);

	return (0);
}
