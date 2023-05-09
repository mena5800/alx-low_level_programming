#include "main.h"

/**
 * read_textfile - print the text from file
 * @filename:filename var
 * @letters:num of letters
 * Return: size of text
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t counter = 0;
	char c;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return (0);
	}

	while (read(fd, &c, 1) && (counter < letters))
	{
		if (write(1, &c, 1) == -1)
		{
			return (0);
		}
		counter++;
	}
	close(fd);
	return (counter);
}
