#include "main.h"
/**
 * set_bit - set bit function
 * @n: bits arg
 * @index: index argument
 * Return: Return value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int c = 1 << index;

	n = c | n;
	return (1);
}
