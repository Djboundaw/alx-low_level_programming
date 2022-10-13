#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function used to print it
 *
 * Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
