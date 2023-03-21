#include <stdio.h>

/**
 * main - the sum of the even-valued of Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long num1, num2, sum, evenSum;

	num1 = 0;
	num2 = 1;
	sum = 0;
	evenSum = 0;

	while (sum <= 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0)
			evenSum += sum;
	}
	printf("%lu\n", evenSum);
	return (0);
}
