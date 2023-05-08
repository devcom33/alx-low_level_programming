#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filenmae: name of the file
 * @letters: size of the file
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t c;
	char *buffer = (char *)filename;

	if (!fd)
		return (0);
	while ((c = read(fd, buffer, letters)) > 0)
		write(STDOUT_FILENO, buffer, letters);
	close(fd);
	return (c);
}
