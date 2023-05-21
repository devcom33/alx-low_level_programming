#include "main.h"
/**
 * cp_file - copies the content of a file to another file
 * @file_from: name of the file
 * @file_to: file destination
 */
void cp_file(char *file_from, char *file_to)
{
	int ff, ft;
	ssize_t wr, rd;
	char buffer[1024];

	ff = open(file_from, O_RDONLY);
	if (!ff)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	while ((rd = read(ff, buffer, 1024)) > 0)
	{
		wr = write(ft, buffer, rd);
		if (wr < 0 || wr != rd)
		{
			printf("Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	if (close(ff) == -1)
	{
		exit(100);
	}
	else
	{
		close(ff);
	}
	if (close(ft) == -1)
	{
		exit(100);
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
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
