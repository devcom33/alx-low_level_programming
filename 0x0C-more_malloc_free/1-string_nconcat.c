#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

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
	unsigned int i = 0, j = 0;

	if (_strlen(s2) <= n)
		n = _strlen(s2);
	s = malloc((n + _strlen(s1)) + 1);
	if (!s)
		return (NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
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
