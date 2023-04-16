#include "main.h"
/**
 * _strlen_recursion - len of a string
 * @s: string argument
 * Return: len of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
