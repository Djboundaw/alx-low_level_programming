#include "main.h"

int _strlen(char *s);
/**
 * infinite_add - function that adds two numbers
 * @n1: * before n1, the first number
 * @n2: * before n2, the second number for addition
 * @r: buffer where to save the result
 * @size_r: size of the buffer
 *
 * Return: return the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char tmp[500] = {0};
	int i, j, q, rem, n1_len, n2_len, n, m;

	n1_len = _strlen(n1);
	n2_len = _strlen(n2);
	rem = 0, q = 0;
	if (n1_len == n2_len)
	{
		for (i = n1_len - 1; i >= 0; i--)
		{
			n = n1[i] - '0';
			m = n2[i] - '0';
			tmp[q] = ((n + m + rem) % 10) + '0';
			rem = (n + m + rem) / 10;
			q++;
		}
		if (rem != 0)
			tmp[q] = rem + '0';
		else
			q--;
	}
	else if (n1_len > n2_len)
	{
		j = n2_len - 1;
		for (i = n1_len - 1; i >= 0; i--)
		{
			if (j < 0)
				m = 0;
			else
				m = n2[j] - '0';
			n = n1[i] - '0';
			tmp[q] = ((n + m + rem) % 10) + '0';
			rem = (n + m + rem) / 10;
			q++;
			j--;
		}
		if (rem != 0)
			tmp[q] = rem + '0';
		else
			q--;
	}
	else
	{
		j = n1_len - 1;
		for (i = n2_len - 1; i >= 0; i--)
		{
			if (j < 0)
				n = 0;
			else
				n = n1[j] - '0';
			m = n2[i] - '0';
			tmp[q] = ((n + m + rem) % 10) + '0';
			rem = (n + m + rem) / 10;
			q++;
			j--;
		}
		if (rem != 0)
			tmp[q] = rem + '0';
		else
			q--;
	}
	if (q >= size_r - 1)
		r = 0;
	else
	{
		for (i = q; i >= 0; i--)
			r[q - i] = tmp[i];
		r[q + 1] = '\0';
	}
	return (r);
}

/**
 * _strlen - length of a string
 * @s: * before s, parameter
 *
 * Return: the length of the parameter
 */
int _strlen(char *s)
{
	int length = 0;

	do {
		length++;
	} while (*(s + length) != '\0');
	return (length);
}
