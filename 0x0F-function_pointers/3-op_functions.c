#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - a function that calculates the sum of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts b from a
 *
 * @a: first number
 * @b: second number
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies a by b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides a by b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that calculate the remainder of a division
 *
 * @a: first number
 * @b: first number
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
