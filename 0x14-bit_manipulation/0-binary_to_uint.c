#include "main.h"

/**
 * binary_to_uint - converts a binary number to an integer
 *
 * @b: a pointer to a string of 0s and 1s
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	const char *ptr;
	unsigned int result;

	if (!b)
		return (0);
	ptr = b, result = 0;
	while (*ptr != '\0')
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);

		result = (result << 1) + (*ptr - '0');
		ptr++;
	}
	return (result);
}
