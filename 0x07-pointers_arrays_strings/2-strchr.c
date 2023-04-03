#include "main.h"
/**
 * _strchr - function that return the first occurrence of the character
 * @s: string argument
 * @c: char argument
 * Return: string value
 */
char *_strchr(char *s, char c)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
