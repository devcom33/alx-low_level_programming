#include "main.h"
/**
 * string_nconcat - concat two string
 * @s1: first string
 * @s2: second string
 * @n: number of letter of a string
 * Return: a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	s = malloc((n * 2) + 1);
	if (!s)
		return (NULL);
	for (i = 0; s1[i] != '\0' && i < n; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i + 1] = '\0';
	return (s);
}
