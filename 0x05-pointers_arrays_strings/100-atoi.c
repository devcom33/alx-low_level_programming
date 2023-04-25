#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string argument
 * Return: integer
 */
int _atoi(char *s)
{
	int i, result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			result = result * 10 + s[i] - '0';
			result *= -1;
		}
		result = result * 10 + s[i] - '0';
	}
	return (result);
}
