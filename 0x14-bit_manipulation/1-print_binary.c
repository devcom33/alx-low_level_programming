#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary repre of a number
 * @n: a number
 */
void print_binary(unsigned long int n)
{
	char *res;
	unsigned long int c;

	if (n == 0)
		printf("0");
	while (n > 0)
	{
		c = n & 1
		res = c + '0' + res;
		n = n>>1;
	}
	printf("%s", res);
}
