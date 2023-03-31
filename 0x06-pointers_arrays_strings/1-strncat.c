#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @dest: string agument
 * @src: string argument
 * @n: number bytes from src
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, lend = 0, j;

	while (dest[lend] != '\0')
	{
		lend++;
	}
	while (src[len] != '\0')
	{
		len++;
	}
	if (len < n)
	{
		n = len;
	}
	for (j = 0; j < n; j++)
	{
		dest[lend + j] = src[j];
	}
	dest[lend + n] = '\0';
	return (dest);
}
