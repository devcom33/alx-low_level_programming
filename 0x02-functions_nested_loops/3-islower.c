#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if lower
 * Return - 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
