#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filenmae: name of the file
 * @letters: size of the file
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDWR);
	ssize_t c;

	if (!fd)
		return (0);
	c = read(fd, filename, letters);
	close(fd);
	return (c);
}
