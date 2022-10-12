#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first term
 * @b: second term
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: first term
 * @b: second term
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first factor
 * @b: second factor
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: the dividend
 * @b: the divider
 *
 * Return: the result of divison of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two numbers
 * @a: the dividend
 * @b: the divider
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
