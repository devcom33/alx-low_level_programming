#include <stdio.h>
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
 * main - prints the minimum number of coins 
 * @argc: argument counter
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int mn, div = 0, chng = 0;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mn = argv[1];
	for (i = 0; coins < 5; i++)
	{
		div = mn / coins[i];
		mn = mn % coins[i];
		chng += div;
		if(mn == 0)
			break;
	}
	printf("%d", chng);
	return (0);
}
