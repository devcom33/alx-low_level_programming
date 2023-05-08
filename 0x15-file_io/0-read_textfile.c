#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: size of the file
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t c, w;
	char *buffer = malloc(letters);

	if (!filename)
		return (0);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, c);
	free(buffer);
	close(fd);
	return (w);
}
