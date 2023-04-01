#include "main.h"
/**
 * _strncpy - copy n char
 * @dest: string argument
 * @src: string argument for src
 * @n: integer argument
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	if (len < n)
	{
		n = len;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
