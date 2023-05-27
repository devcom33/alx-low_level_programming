#include "main.h"
/**
 * op_file - open files and cheching
 * @file_from: file_from argument
 * @file_to: file_to argument
 * @ff: ff arg
 * @ft: ft arg
 */
void op_file(char *file_from, char *file_to, int ff, int ft)
{
	ff = open(file_from, O_RDONLY);
	if (!ff)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	(void)ft;
}
/**
 * cp_file - copies the content of a file to another file
 * @file_from: name of the file
 * @file_to: file destination
 */
void cp_file(char *file_from, char *file_to)
{
	int ff = 0, ft = 0;
	ssize_t wr, rd;
	char buffer[1024];

	ff = open(file_from, O_RDONLY);
	if (!ff)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(ff, buffer, 1024)) > 0)
	{
		wr = write(ft, buffer, rd);
		if ((wr < 0) || (wr != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(ff), exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
	}
	else
		close(ff);
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	}
	else
	{
		close(ft);
	}
}
/**
 * main - check the code
 * @ac: number of args
 * @av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
