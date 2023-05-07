#include "main.h"
/**
 * get_bit - returns the val of a bit at a given index
 * @n: a number
 * @index: index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	if (n < index)
		return (-1);
	c = (n >> index) % 10;
	if (c & 1)
		return (1);
	else if (c & 0)
		return (0);
	return (c);
}
