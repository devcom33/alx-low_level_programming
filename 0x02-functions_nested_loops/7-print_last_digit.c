#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number
 * Return: answer
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	((n > 0) ? res : res = res * -1);
	_putchar(res + '0');
	return (res);
}
