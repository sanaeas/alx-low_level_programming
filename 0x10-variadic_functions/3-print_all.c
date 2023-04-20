#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 *
 * @format: a list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	print_t types[] = {
		{ "c", print_achar },
		{ "i", print_anint },
		{ "f", print_afloat },
		{ "s", print_astr }
	};
	unsigned int i, j;
	char *sep = "";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].symb)
			{
				types[j].print(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_achar - a function that prints a character
 *
 * @separator: a separator of the character
 * @args: list of arguments
 *
 * Return: void
 */
void print_achar(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_anint - a function that prints an integer
 *
 * @separator: a separator for the int
 * @args: list of arguments
 *
 * Return: void
 */
void print_anint(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_afloat - a function that prints a float
 *
 * @separator: a separator for the float
 * @args: list of arguments
 *
 * Return: void
 */
void print_afloat(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_astr - a function that prints a string
 *
 * @separator: a separator for the string
 * @args: list of arguments
 *
 * Return: void
 */
void print_astr(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, str);
}
