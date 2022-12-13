#include <stdlib.h>
#include <string.h>
#include "main.h"

/* char *str_reduct(char **str, int i); */
/* int _strlen(char *s); */

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of pointer to the arguments
 *
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *arr, *array;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		array = malloc(strlen(av[i]) + 1);
		if (array == 0)
			return (NULL);
		for (j = 0; j < _strlen(av[i]) + 1; j++)
			array[j] = av[i][j];
	}
	return (arr);
}

/**
 *  * _strlen_recursion - returns the length of a string
 *   * @s: string to calculate the length
 *    *
 *     * Return: the length of the string (int)
 *      */
int _strlen(char *s)
{
	        int length;

		        length = 0;
			        if (s[0] == '\0')
					                length = 0;
				        else if (s[0] == '\0')
						                length = 1;
					        else
							                length = _strlen(s + 1) + 1;
						        return (length);
}


/**
 * str_reduct - reduce the string
 * @str: pointer to a pointer
 *
 * Return: un string
 *
char *str_reduct(char **str, int i)
{
	char *reduct;
	int j;

	if (strlen(str[i]) == 0)
		reduct = ' ';
	for (j = 0; j < strlen(str[i]); j++)
		reduct[j] = str[i][j];
	return (reduct);
}*/
