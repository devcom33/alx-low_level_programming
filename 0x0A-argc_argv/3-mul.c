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
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	(void)argc;
	return (0);
}
