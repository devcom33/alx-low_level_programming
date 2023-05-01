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
	int bytes = atoi(argv[2]);
	char *bt = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *(bt + i));
	}
	return (0);
}
