#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: a given number
 * @index: index of the bit you want to get
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
