#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its own opcode
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == (bytes - 1))
		{
			printf("%02x ", *ptr++);
			break;
		}
		printf("%02x ", *ptr++);
	}
	return (0);
}
