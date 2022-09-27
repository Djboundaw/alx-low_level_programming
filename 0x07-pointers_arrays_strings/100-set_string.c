#include "main.h"

/**
 * set_string - function tha sets the value of a pointer to a char
 * @s: string to turn to char
 * @to: char to copy to s
 *
 * Return: void function no return value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
