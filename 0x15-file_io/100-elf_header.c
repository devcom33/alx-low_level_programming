#include "main.h"

void print_entry_address(char *ptr)
{
	int i;
	int begin;
	char sys;

	printf("  Entry point address:               0x");
	sys = ptr[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (i = begin; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (sys == '2')
    	{
        	begin = 26;
        	for (i = begin; i > 23; i--)
        	{
            		if (ptr[i] >= 0)
                		printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);
		}
	}
	printf("\n");
}

void print_type(char *ptr)
{
	char type;

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];
	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
    	if (osabi == 0)
        	printf("UNIX - System V\n");
    	else if (osabi == 2)
        	printf("UNIX - NetBSD\n");
	else if (osabi == 6)
        	printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);
	printf("  ABI Version:                       %d\n", ptr[8]);
}

void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

void print_data(char *ptr)
{
    char data = ptr[5];

    printf("  Data:                              2's complement");
    if (data == 1)
        printf(", little endian\n");

    if (data == 2)
        printf(", big endian\n");
}

void print_magic(char *ptr)
{
    int bytes;

    printf("  Magic:  ");

    for (bytes = 0; bytes < 16; bytes++)
        printf(" %02x", ptr[bytes]);

    printf("\n");
}

void check_sys(char *ptrmag)
{
	char sys = ptrmag[4] + '0';

    	if (sys == '0')
        	exit(98);

	printf("ELF Header:\n");
	print_magic(ptrmag);
	if (sys == '1')
		printf("  Class:                             ELF32\n");
	if (sys == '2')
		printf("  Class:                             ELF64\n");
	print_data(ptrmag);
	print_version(ptrmag);
	print_osabi(ptrmag);
	print_type(ptrmag);
	print_entry_address(ptrmag);
}
int check_elf(char *ptr)
{
	return (ptr[0] == ELFMAG0 &&
			ptr[1] == ELFMAG1 &&
			ptr[2] == ELFMAG2 &&
			ptr[3] == ELFMAG3);
}
int main(int argc, char *argv[])
{
	int file_descriptor, read_result;
	char magic_buffer[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	file_descriptor = open(argv[1], O_RDONLY);

	if (file_descriptor < 0)
	{
		dprintf(STDERR_FILENO, "Error: Failed to open the file\n");
		exit(98);
	}

	lseek(file_descriptor, 0, SEEK_SET);
	read_result = read(file_descriptor, magic_buffer, 27);

	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Failed to read the file\n");
		exit(98);
	}

	if (!check_elf(magic_buffer))
	{
		dprintf(STDERR_FILENO, "Error: It is not an ELF file\n");
		exit(98);
	}

	check_sys(magic_buffer);
	close(file_descriptor);

	return 0;
}
