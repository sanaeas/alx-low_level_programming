#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2 diagonals of a square matrix of int
 *
 * @a: 2D array of int
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
