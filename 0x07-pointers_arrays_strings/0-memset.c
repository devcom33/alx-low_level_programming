#include "main.h"
/**
 * _memset - function fills the first n bytes
 * @s: string argument
 * @b: char argument
 * @n: size of the furst argument
 * Return: string value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
