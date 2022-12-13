#ifndef _VARIADIC_
#define _VARIADIC_

#include <stdarg.h>
#include <stdio.h>

typedef struct printer {
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_char(va_list arg);

void print_int(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

#endif /* _VARIADIC */
