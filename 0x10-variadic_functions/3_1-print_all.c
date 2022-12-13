#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints everything
 * @format: the mandatory parameter
 *
 * Return: void function
 */
void print_all(const char * const format, ...)
{
va_list list;
unsigned int j = 0;
char *p;

va_start(list, format);
while (format && format[j] != '\0')
{
switch (format[j])
{
case 'c':
printf("%c", va_arg(list, int));
break;
case 'i':
printf("%i", va_arg(list, int));
break;
case 'f':
printf("%f", va_arg(list, double));
break;
case 's':
printf(", ");
p = va_arg(list, char*);
if (p)
{ printf("%s", p);
break; }
printf("%p", p);
break;
}
printf(", ");
j++;
}
printf("\n");
va_end(list);
}
