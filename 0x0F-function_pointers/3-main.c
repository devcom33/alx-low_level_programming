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
	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}
	int nm1 = atoi(argv[1]);
	char *op = argv[2];
	int nm2 = atoi(argv[2]);
	int (*op_func)(int, int) = get_op_func(op);

	printf("%d\n", op_func(nm1, nm2));
	return (0);
}
