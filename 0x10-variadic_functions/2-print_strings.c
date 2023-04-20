#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
