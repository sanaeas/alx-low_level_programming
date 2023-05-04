#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: the first given number
 * @m: the second given number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int diff = n ^ m;

	count = 0;
	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
