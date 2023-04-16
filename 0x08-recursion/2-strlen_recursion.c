#include "main.h"
/**
 * _strlen_recursion - len of a string
 * @s: string argument
 * Return: len of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!(*s))
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
