#include <stdio.h>
#include <stdlib.h>

/**
 * main - the minimum number of coins to make change for an amount of money
 *
 * @argc: arguments count
 * @argv: arguments vector (array)
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}
	printf("%i\n", coins);
	return (0);
}
