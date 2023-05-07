#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the val of a bit at a given index
 * @n: a number
 * @index: index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 0, mx;

	mx = sizeof(unsigned long int);
	if (mx < index)
		return (-1);
	c = (n >> index);
	if (c & 1)
		return (1);
	return (0);
}
