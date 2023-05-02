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
	int len, i, j, k, l;
	char **nw;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = cntword(str);
	nw = malloc((len + 1) * sizeof(char *));
	if (nw == NULL || len == 0)
		return (NULL);
	for (i = k = 0; i < len; i++)
	{
		for (j = k; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				k++;
			if (str[j] != ' ' && (*(str + j + 1) == ' ' || *(str + j + 1) == '\0'))
			{
				nw[i] = malloc((j - k + 2) * sizeof(char));
				if (nw[i] == NULL)
				{
					return (NULL);
				}
				break;
			}
		}
		for (l = 0; k <= j; k++, l++)
			nw[i][l] = str[k];
		nw[i][j] = '\0';
	}
	nw[i] = NULL;
	return (nw);
}
