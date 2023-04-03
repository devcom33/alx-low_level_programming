#include "main.h"
/**
 * _memcpy - function that copy the first n bytes
 * @dest: string argument
 * @src: char argument
 * @n: size of the furst argument
 * Return: string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
