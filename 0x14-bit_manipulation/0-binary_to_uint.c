#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number in char
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		else
		{
			c = c * 2 + (*b - '0');
			b++;
		}
	}
	return (c);
}
