#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - struct printer
 * @symb: the symbol of the format type
 * @print: a function pointer
 */
typedef struct printer
{
	char *symb;
	void (*print)(char *separator, va_list args);
} print_t;

void print_achar(char *separator, va_list args);
void print_anint(char *separator, va_list args);
void print_afloat(char *separator, va_list args);
void print_astr(char *separator, va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
