#include "main.h"


/**
 * create_file - create a text file
 * @filename: file to write to
 * @text_content: text content
 * Return: 1 on success
 */


int create_file(const char *filename, char *text_content)
{
	int fd, str_len, wrote;

	str_len = (int) strlen(text_content)  + 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	text_content = text_content ? text_content : " ";

	wrote = write(fd, text_content, str_len);

	if (wrote == -1)
		return (-1);

	close(fd);

	return (1);
}
