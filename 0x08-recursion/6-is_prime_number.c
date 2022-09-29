#include "main.h"

/**
 * is_prime_number - checks if the number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 else
 */
int is_prime_number(int n)
{
	return (is_divider(n, 2));
}

/**
 * is_divider - check if there is numbers lower
 * thant n which can divide n
 * @n: number to check
 * @div: first number to start
 *
 * Return: 0 if divider found, 0 else
 */
int is_divider(int n, int div)
{
	if (div >= n && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (is_divider(n, div + 1));
}
