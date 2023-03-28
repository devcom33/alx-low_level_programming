#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: dest string arg
 * @src: source arg
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
