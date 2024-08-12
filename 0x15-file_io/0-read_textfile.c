#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX
 * @filename: ...
 * @letters: no of letters it should read
 * Return: the actual no it could read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, t, fp;
	char *buffer;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fp);

	return (w);
}
