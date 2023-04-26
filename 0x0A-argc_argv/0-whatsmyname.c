#include <stdio.h>
#include "main.h"
/**
 * main - print program name
 * @argc: argument counter
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
