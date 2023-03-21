#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if lower
 * @c: ascci of ch
 * Return: if Success 1 else 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
