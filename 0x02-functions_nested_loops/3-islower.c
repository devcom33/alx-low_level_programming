#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if lower
 * @c: ascci of ch
 * Return : 1 Success
 * Else : 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
