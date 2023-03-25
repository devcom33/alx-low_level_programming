#include <stdio.h>
#include "main.h"
/**
 * _isupper - to check if args is upper or not
 * @c: integer
 * Return: 1 if is True else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
