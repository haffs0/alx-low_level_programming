#include "main.h"


/**
 * append_text_to_file - append a text to file
 * @filename: file to write to
 * @text_content: text content
 * Return: 1 on success
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrote = write(fd, text_content, len);

		if (wrote == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
