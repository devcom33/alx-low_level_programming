#include "main.h"
/**
 * _strncpy - copy n char
 * @dest: string argument
 * @src: string argument
 * @n: integer argument
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

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
	dest[n] = '\0';
	return (dest);
}
