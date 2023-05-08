#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the stdout
 *
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd_bytes, wr_bytes;
	char *s;
	int file;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (!file)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
	{
		close(file);
		return (0);
	}
	rd_bytes = read(file, s, letters);
	if (rd_bytes < 0)
	{
		close(file);
		free(s);
		return (0);
	}
	s[rd_bytes] = '\0';
	close(file);
	wr_bytes = write(STDOUT_FILENO, s, rd_bytes);
	if (wr_bytes < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (wr_bytes);
}
