#include "main.h"
/**
 * cp_file - copies the content of a file to another file
 */
int cp_file(char *file_from, char *file_to)
{
	int ff, ft;
	ssize_t wr, rd;
	ff = open(file_from, O_RDONLY);
	if (!ff)
	{
		exit(98);
		dprintf("Error: Can't read from file NAME_OF_THE_FILE\n");
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	rd = read(ff, buffer, size);

	wr = write(rd, buffer, size);
	return (1);
}
