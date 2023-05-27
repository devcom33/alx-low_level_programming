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
	Elf64_Ehdr *hd;

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
	hd = malloc(sizeof(Elf64_Ehdr));
	if (!hd)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Allocation failed\n");
		exit(98);
	}
	sr = read(fd, hd, sizeof(Elf64_Ehdr));
	if (!sr)
	{
		free(hd);
		close(fd);
		dprintf(STDERR_FILENO, "Error can't be read\n");
		exit(98);
	}
	return (0);
}
