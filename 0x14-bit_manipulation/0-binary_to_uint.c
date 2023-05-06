#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number in char
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, n = 1, k = 1, i;

	while (k < _strlen(b))
	{
		n = n * 2;
		k++;
	}
	for (i = 0; (*b) != '\0'; i++)
	{
		if (*b == '0' || *b == '1')
		{
			c = c + 2 * n * (*b - '0');
			b++;
			n /= 2;
		}
		else
			return (0);
	}
	return (c);
}
