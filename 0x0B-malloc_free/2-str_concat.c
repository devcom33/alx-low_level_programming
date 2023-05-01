#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: first string
 * Return: return a string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *str;

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		_putchar('m');
		for (i = 0; i < len1 ; i++)
		{
			str[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < len2; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
