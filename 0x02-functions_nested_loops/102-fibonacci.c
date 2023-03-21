#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long num1, num2, sum;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
