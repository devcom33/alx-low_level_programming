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
	char *fld = "failed to allocate memory";

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		while ((*fld) != '\0')
		{
			_putchar(*fld);
			fld++;
		}
		_putchar('\n');
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = i; j < len2; j++)
	{
		str[j] = s2[j];
	}
	return (str);
}
