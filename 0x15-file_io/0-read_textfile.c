#include "main.h"

/**
 * read_textfile - reads a file and prints it to POSIX stdout
 * @filename: the filename
 * @letters: number of letters to read and print
 *
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fic = fopen(filename, "r");
	char letter;
	size_t len = 0;

	if (filename == NULL)
		return (0);
	if (fic == NULL)
		exit(1);
	while (len != letters)
	{
		letter = fgetc(fic);
		printf("%c", letter);
		len++;
	}
	fclose(fic);
	return (letters);
}
