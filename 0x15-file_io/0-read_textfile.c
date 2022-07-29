#include "main.h"


/**
 * read_textfile - Read a textfile to standard outout
 * @filename: name of the file
 * @letters: Number of letter to be write
 * Return: Number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, print, wrote;
	char *buff;

	buff = malloc(letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	print = read(fd, buff, letters);

	if (print == -1)
		return (0);

	wrote = write(STDOUT_FILENO, buff, print);

	if (wrote == -1)
		return (0);

	*buff = '\0';
	close(fd);
	free(buff);

	return (print);
}
