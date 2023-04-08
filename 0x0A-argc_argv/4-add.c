#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	i = 1;
	result = 0;
	while (i < argc)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
