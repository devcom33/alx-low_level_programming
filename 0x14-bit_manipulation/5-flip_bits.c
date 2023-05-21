#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - a function that returns the number of bits
 * @n: first unsi integer argument
 * @m: second integer argument
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int v = n ^ m;
	unsigned int cnt = 0;

	while (v)
	{
		if ((v | 1) == v)
		{
			v = v >> 1;
		}
		else if ((v | 1) != v)
		{
			cnt++;
			v = v >> 1;
		}
	}
	return (cnt);
}
