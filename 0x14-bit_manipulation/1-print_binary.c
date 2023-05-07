#include "main.h"
/**
 * print_binary - prints the binary repre of a number
 * @n: a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_ = n, c = 1, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n_ > 0)
	{
		len++;
		n_ = n_>>1;
	}
	len -= 1;
	if (len > 0)
		c = c << len;
	while (c > 0)
	{
		if (c & n)
			_putchar('1');
		else
			_putchar('0');
		c = c>>1;
	}
}
