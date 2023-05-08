#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_ret;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		write_ret = write(fd, text_content, len);
		if (write_ret == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
