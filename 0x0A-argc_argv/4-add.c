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
 * main - print addition of numbers
 * @argc: argument counter
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int s = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ( (argv[i][j] - '0') != _atoi(argv[i]))
				{
					printf("%s\n", "Error");
					break;
				}
			}	
			s = s + _atoi(argv[i]);
		}
		if (i == argc)
		{
			printf("%d\n", s);
		}
	}
	return (0);
}
