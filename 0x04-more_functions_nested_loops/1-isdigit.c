#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check if c is digit
 * @c: integer c
 * Return: 1 if True and 0 else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
