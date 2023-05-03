#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: num of args
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (sum);
}
