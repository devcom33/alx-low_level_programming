#include "function_pointers.h"
#include <stdio.h>
/**
 * op_add - add two arguments
 * @a: integer argument
 * @b: integer argument
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two arguments
 * @a: integer argument
 * @b: integer argument
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul of two arguments
 * @a: integer argument
 * @b: integer argument
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div of two arguments
 * @a: integer argument
 * @b: integer argument
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod of two arguments
 * @a: integer argument
 * @b: integer argument
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s", "Error");
		exit(98);
	}
	return (a % b);
}
