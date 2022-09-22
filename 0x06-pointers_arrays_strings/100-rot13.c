#include "main.h"

/**
 * rot13 - function that encodes a string using rot12
 * @str: * before str, the string to encode
 *
 * Return: return the result of the encodage
 */
char *rot13(char *str)
{
	int i, n, a;
	char Az_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
		97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
		78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 110, 111,
		112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	char Nm_letters[] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
		110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
		65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 97, 98, 99,
		100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	n = 0;
	do {
		a = *(str + n);
		for (i = 0; i < 52; i++)
		{
			if (a == Az_letters[i])
				*(str + n) = Nm_letters[i];
		}
		n++;
	} while (a != '\0');
	return (str);
}
