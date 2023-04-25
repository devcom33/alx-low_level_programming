#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string argument
 * Return: integer
 */
int _atoi(char *s)
{
	int i, result = 0, op = 1;

	for (i = 0; (s[i] != '-') || (s[i] != '+'); i++)
	{
		if (s[i] == '-')
		{
			op *= -1;
		}
	}
	for (; s[i] != '\0'; i++)
	{
		result = result * 10 + s[i] - '0';
	}
	return (result);
}
