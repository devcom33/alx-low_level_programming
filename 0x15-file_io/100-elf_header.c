#include "main.h"
/**
 * main - main function
 * @argc: num of argum
 * @argv: arguments
 * Return: 0
 */









int main(int argc, char *argv[])
{
	int fd, sr;

	(void)sr;
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf header\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error can't be read\n");
		exit(98);
	}
	return (0);
}
