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
		printf("Error");
		return (1);
	}
	int nm1 = atoi(argv[1]);
	char *op = argv[2];
	int nm2 = atoi(argv[2]);
	return (get_op_func(op)(nm1, nm2));
}
