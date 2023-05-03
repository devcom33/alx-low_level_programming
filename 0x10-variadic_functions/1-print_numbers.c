#include "variadic_functions.h"
/**
 * print_numbers - print numbers arguments
 * @separator: string sep
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);
	
	if (!separator)
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));

}
