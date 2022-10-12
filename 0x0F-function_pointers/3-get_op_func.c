#include "3-main.h"

/**
 * get_op_func - select the correct function to perform operation
 * @s: the operator (+, -, *, /, %, NULL)
 *
 * Return: a pointer to the needed function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	return ();
}
