#include "main.h"
/**
 * cntword - count words
 * @str: string argument
 * Return: number of words
 */
int cntword(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != '\0' && *str != ' ')
				str++;
			len++;
		}
	}
	return (len);
}
/**
 * strtow - split a string into words
 * @str: string argument
 * Return: array of words
 */
char **strtow(char *str)
{
	int i, j, len;
	char **nw;

	if (str == NULL || *str == '')
		return (NULL);
	len = cntword(str);
	nw = malloc((len + 1) * sizeof(char *));
	if (nw == NULL || len == 0)
		return (NULL);
	return (nw);
}
