#include <stdio.h>
/**
 * main - a program that prints the opcodes
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes = atoi(argc[2]);
	char *bt = (char *)main;

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
		printf("%02hhx", bytes);
	}
	return (0);
}
