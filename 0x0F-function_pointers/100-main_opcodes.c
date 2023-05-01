#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the opcodes
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes;
	char *bt;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bt = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if ((bytes - 1) == i)
		{
			printf("%02hhx\n", *(bt + i));
			break;
		}
		printf("%02hhx ", *(bt + i));
	}
	return (0);
}
