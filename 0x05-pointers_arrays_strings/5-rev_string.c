#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string argument
 */
void rev_string(char *s)
{
	int len = 0, i, j, tmp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	j = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
		j--;
	}
}
