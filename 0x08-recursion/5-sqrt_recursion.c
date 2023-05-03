#include "main.h"
/**
 * _sqrt_recursion - x raised to the power of y
 * @n: integer argument
 * Return: power of x
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return _sqrt_recursion();
}
