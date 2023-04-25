#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string argument
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, result = 0, op = 1;

	while (((s[i] - '0' < 0) || (s[i] - '0' > 9)) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			op *= -1;
		}
		i++;
	}
	for (; s[i] != '\0' || (s[i + 1] - '0' < 0) || (s[i + 1] - '0' > 9); i++)
	{
		if (((s[i] - '0' >= 0) && (s[i] - '0' <= 9)))
		{
			result = result * 10 + s[i] - '0';
		}
	}
	return (result * op);
}
