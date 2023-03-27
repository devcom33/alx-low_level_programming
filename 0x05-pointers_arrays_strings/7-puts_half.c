#include "main.h"
/**
 * put_half - second half of the string
 * @str: string argument
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
