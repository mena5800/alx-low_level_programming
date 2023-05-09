#include "main.h"

/**
 * create_file - create file with textcontent
 * @filename: the name of file
 * @text_content: the text should be in file
 * Return: 1 on success -1 in fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
