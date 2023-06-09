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
	char *fld = "failed to allocate memory";

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + len) != '\0')
	{
		len++;
	}
	len++;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		while ((*fld) != '\0')
		{
			_putchar(*fld);
			fld++;
		}
		_putchar('\n');
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(dup + i) = *(str + i);
	}
	return (dup);
	free(dup);
}
