#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that return the first occurrence of the character
 * @s: string argument
 * @c: char argument
 * Return: string value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
