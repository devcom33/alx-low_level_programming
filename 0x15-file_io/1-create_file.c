#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: return number
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t wr;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == -1)
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	else
		fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);
	buffer = malloc(sizeof(text_content));
	if (buffer)
		return (-1);
	wr = write(fd, buffer, 1);
	if (wr < 0)
		return (-1);
	return (wr);
}
