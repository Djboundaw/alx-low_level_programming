#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp - function that compares two strings
 * @s1: * before s1, the first string
 * @s2: * before s2, the second string
 *
 * Return: negative, positve or 0 for less than,
 * greater than or equal
 */
int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0, res = 0;
	do {
		res = s1[i] - s2[i];
		if (res != 0)
			break;
		i++;
	} while (s1[i] != '\0' && s2[i] != '\0');
	return (res);
}

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

	i = 0;
	while (i < 5)
	{
		if (_strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
