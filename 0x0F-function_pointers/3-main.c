#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - main function
 * @argc: integer argument
 * @argv: char argument
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int nm1;
	char *op;
	int nm2;
	int (*op_func)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	op_func = get_op_func(op);
	nm1 = atoi(argv[1]);
	nm2 = atoi(argv[3]);
	printf("%d\n", op_func(nm1, nm2));
	return (0);
}
