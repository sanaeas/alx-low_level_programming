#include "main.h"

/**
 * is_prime - Check if the number is a prime number
 *
 * @n: a given number
 * @i: divisor
 *
 * Return: 1 if n is a prime number
 */
int is_prime(float n, float i)
{
	if (n == i)
		return (1);
	if (n / i == (int)(n / i))
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: a given number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
