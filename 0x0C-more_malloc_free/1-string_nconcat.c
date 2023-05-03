#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
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
	int i = 0, j = 0, nl = n;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (_strlen(s2) <= nl)
		nl = _strlen(s2);
	s = malloc((nl + _strlen(s1)) + 1);
	if (!s)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < nl; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
