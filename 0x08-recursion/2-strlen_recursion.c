#include "main.h"
/**
 * _strlen_recursion - len of a string
 * @s: string argument
 * Return: len of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	_strlen_recursion(s + i);
	return (i);
}
