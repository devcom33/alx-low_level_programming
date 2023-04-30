#include "main.h"
/**
 * _strdup - copy of the string
 * @str: string argument
 * Return: a duplcate string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *dup;

	while(*(str + len) != '\0')
	{
		len++;
	}
	dup = malloc(sizeof(char) * len);
	if (dup == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(dup + i) = *(str + i);
	}
	return (dup);
	free(dup);
}
