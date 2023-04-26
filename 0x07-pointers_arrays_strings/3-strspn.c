#include "main.h"
/**
 * _strspn - gets the length of a prefix substrin
 * @s: string argument
 * @accept: string argument
 * Return: len integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len = i;
				break;
			}
		}
		if (len == 0)
		{
			break;
		}
	}
	return (len);
}
