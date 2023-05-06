#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
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
	unsigned int c, n = 1, i;

	if (!b)
		return (0);
	while (b)
		b++;
	b--;
	for (i = 0; i < _len(b); i++)
	{
		c = c + 2 * n * (*b - '0');
		b--;
		n = 2;
	}
	return (c);
}
