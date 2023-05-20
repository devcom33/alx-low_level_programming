#include "main.h"
/**
 * clear_bit - clear bit function
 * @n: bits arg
 * @index: index argument
 * Return: Return value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (*n == 0)
		return (1);
	if (index > 64)
		return (-1);
	c = ~(1 << index);
	(*n) = c & (*n);
	return (1);
}
