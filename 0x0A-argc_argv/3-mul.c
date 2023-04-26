#include <stdio.h>
#include "main.h"
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string argument
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int i = 0, result = 0, op = 1;

	while (((s[i] - '0' < 0) || (s[i] - '0' > 9)) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			op *= -1;
		}
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (((s[i] - '0' >= 0) && (s[i] - '0' <= 9)))
		{
			result = result * 10 + s[i] - '0';
			if ((s[i + 1] - '0' < 0) || (s[i + 1] - '0' > 9))
			{
				break;
			}
		}
	}
	return (result * op);
}
/**
 * main - print program name
 * @argc: argument counter
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
	(void)argc;
	return (0);
}
