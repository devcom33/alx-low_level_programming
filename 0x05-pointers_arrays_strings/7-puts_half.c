#include "main.h"
/**
 * puts_half - second half of the string
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
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
