#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _abs - absolute value
 * @num: number
 * Return: answer
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	return (num * (-1));
}
