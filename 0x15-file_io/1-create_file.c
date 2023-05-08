#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: return number
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[len])
		len++;
	wr = write(fd, text_content, len);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
