#include "main.h"
/**
 * set_bit - set bit function
 * @n: bits arg
 * @index: index argument
 * Return: Return value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = 1 << index;

	if (index > 64)
		return (-1);
	(*n) = c | (*n);
	return (1);
}
