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

	if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (s1);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
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
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = i; s2[j] != '\0'; j++)
	{
		str[j] = s2[j];
	}
	return (str);
}
