#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes the given text content into it
 * @filename: The name of the file to create
 * @text_content: The text to write into the file
 *
 * Return: 1 on success, or -1 if an error occurred
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	written = write(fd, text_content, len);
	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
