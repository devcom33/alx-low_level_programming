#include <stdio.h>
/**
 * _isalpha - check letter
 * @c: character ascii
 * Return: 1 success or 0 else
 */


int _isalpha(int c)
{

	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}

	return (0);
}
