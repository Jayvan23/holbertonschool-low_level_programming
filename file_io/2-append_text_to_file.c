#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to append.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		nwrite = write(fd, text_content, strlen(text_content));
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
