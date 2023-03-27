#include "main.h"
/**
 * print_rev - print reverse string
 * @s: string argument
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

}
